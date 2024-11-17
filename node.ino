// #CAN NODE NAME: G2
// #MOTOR NODE: 0x500
// #CAN ID BEING SENT: 0x900 (SENSOR), 0x950 (ENCODER)
// #DATA LENGTH: 1 BYTES
// #ACCEPTS RASPI JOY CAN ID: x500
// #E-STOP ID: 0x600
// #RECORD/REPLAY: 0x305
// ALL DELAYS SHOULD BE HANDLED IN THE FUNCTIONS, NOT THE MAIN LOOP(). THE GOAL IS TO DO AS LITTLE WORK IN THE LOOP() AS POSSIBLE, SO THAT WE CAN DICTATE THE ESP32 BEHAVIOUR AS CLOSELY AS WE NEED TO.

#include <SPI.h>
#include <mcp2515.h>
#include <stdlib.h>
#include <stdio.h>
#include <Wire.h>
#include "AS5600.h"

AS5600 as5600;

// # PINOUT #

#define RAS 0x400 // Raspi ID for this node
#define EST 0x600 // E-stop ID for all nodes
#define REP 0x305 // Record/replay ID for all nodes
#define END 25//End effector pin

// LED
#define LED 2

// Motor
#define ENA 14
#define DIR 12
#define PUL 13
#define MOT 1 //G1 - 1, G2 - 2, G3 - 0
// int default = 0; // default positioning for motor

// Encoder
#define SCL 22
#define SDA 21
#define ENC 0x900 // Encoder ID for this node

// Sensor
#define CURR 26
#define SEN 0x950 // Sensor ID for this node

// Freeze
volatile bool eStopTriggered = false;  // Global E-stop flag

// CS pin for ESP32s
MCP2515 mcp2515(5);
// MOSI     - D23
// SCK     - D18
// MISO     - D19
// CS     - D5
// GND    - GND
// 5V     - VIN
// 3V3     - 3V3

// # VARIABLES #

// External Data
int data1 = 0; // Current sensor data
float data2 = 0; // Encoder data
int but; // Count how many times record button pressed
int cnt = 0;
int pull = 0; // poll for time
// Dynamically allocated array for record/replay
int arr[50];
int pol[50];

// Data to be sent
int steps = 1; // Amount of steps to move

// Boolean valules for checking
bool changeS; // Sensor data changed
bool changeE; // Encoder data changed
bool set = false; // are motors set to default?

// Encoder angles
int magnetStat = 0;
int lowbyt; 
word highbyt;
int rawAngle; 
float degAngle;
float correctedAngle = 0;
float startAngle = 0; 
float totalAngle = 0;
float stepAngle = 1.8; // Degrees per step
float enc = 0;

// Sensor data
int curr = 0;
const float sensitivity = 0.185; // Sensitivity for ACS712 (in V/A), depends on model: 5A = 0.185V/A, 20A = 0.1V/A, 30A = 0.066V/A
const float offset = 0.0; // Offset for calibration
const int sampleSize = 100; // Number of samples to average
const int sampleDelay = 10; // Delay between samples (ms)


// ********************************************************
// ## FUNCTIONS AND CODE ##
void setup() 
{
  // Start serial output
  Serial.begin(115200);
  while(!Serial); // Wait for serial to open

  // Set LED pin
  pinMode(LED, OUTPUT);
  Serial.println("Onboard LED Indicator Initialized.");

  //End effector pin
  pinMode(END, OUTPUT);

  // Declare Sensor pin
  pinMode(CURR, OUTPUT);

  // Declare Encoder pins
  Wire.begin(SDA, SCL); // SDA, SCL
  as5600.begin(); 
  as5600.setDirection(AS5600_CLOCK_WISE);  // default, just be explicit.
  Serial.println("Encoder Initialized.");
  delay(100);

  // Declare motor pins as output:
  pinMode(PUL, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(ENA, OUTPUT);
  // Set the spinning direction CW/CCW:
  digitalWrite(DIR, HIGH);
  digitalWrite(ENA, LOW);
  Serial.println("Motor Initialized.");
  delay(100);

  // Initialize SPI
  SPI.begin();
  Serial.println("SPI Initialized.");
  delay(100);

  // Initialize CAN
  mcp2515.reset();
  mcp2515.setBitrate(CAN_500KBPS, MCP_16MHZ);
  mcp2515.setNormalMode();
  Serial.println("MCP Initialized.");


  // Final print statements for startup
  Serial.println("System fully operational, Boss. CAN is a-go.");
  Serial.println("--------------------------------------------");

  delay(1000);
}
// ********************************************************

// ********************************************************
void loop() 
{
  //Recieve CAN messages
  recieveCAN();
  delay(500);
  
}
// ********************************************************

// ********************************************************
// Send CAN frame
void sendCAN(canid_t can_id, int dlc, int data, int frame)
{
  struct can_frame canMsg;
  canMsg.can_id = can_id;     // CAN ID
  canMsg.can_dlc = dlc;       // Data length (1 byte)
  canMsg.data[frame] = data;  // Set data byte to current value
  delay(10);
  
   // Send the message
  if (mcp2515.sendMessage(&canMsg) == MCP2515::ERROR_OK) {
    Serial.println("Sent");
    // If sensor data, print that data
    if(canMsg.can_id == SEN)
    {
      Serial.print("Sent Sensor Data: ");
      Serial.println(data);
    }
    // If encoder data, print that data
    if(canMsg.can_id == ENC)
    {
      Serial.print("Sent Encoder Data: ");
      Serial.println(data);
    }
    delay(500); // Delay to not overload system
  }
  else 
  {
    Serial.println("Failed to send message!");
    blink(); // Blink LED 10 times to signal SEND error without serial print
  }

}
// ********************************************************

// ********************************************************
// Read CAN frame
void recieveCAN()
{
  struct can_frame canMsg;

  // ********************************************************
  // Check if a new message is available
  if (mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK)
  {
    Serial.println("Msg okay!");
    // ********************************************************
    // Joystick CAN ID
    if (canMsg.can_id == RAS) 
    {
      int receivedValue = canMsg.data[MOT];
      Serial.print("Received: ");
      Serial.println(receivedValue);
      sendCAN(0x100, 1, 1, 0); // Ack CAN ID for debugging purposes

      drive(receivedValue); // Trigger motor movement
      Serial.println(pull);
      // If recording, add data to array
      if(but == 1)
      {
        Serial.println("Recorded");
        arr[cnt] = receivedValue;
        pol[cnt] = pull;
        Serial.println(pull);
        cnt++;
      }

     // delay(100);
    }
    // ********************************************************
    // ********************************************************
    // E-stop CAN ID, when recieved stops all ESP32 movement!
    if(canMsg.can_id == EST)
    {
      Serial.print("Freeze!");
      receivedValue = canMsg.data[0];
      drive(receivedValue);
      eStopTriggered = true; // Set the flag
      delay(3000); // Three second delay before unfreezing
     // freeze();      
    }
    // ********************************************************
    // End Effector
    if(canMsg.can_id == 0x308)
    {
      // Flip based on if end effectr is open or closed
      if(digitalRead(END) == HIGH)
      {
        digitalWrite(END, LOW);
      }
      else
      {
        digitalWrite(END, HIGH);
      }

    }
    // ********************************************************
    // Record/replay data
    if(canMsg.can_id == REP)
    {
      delay(10); // Debounce

      // Button is being pressed to record
      // Population of array can be found in the RAS if() above
      if(canMsg.data[0] != 3)
      {
        if(but == 0)
        {
          toDefault();
          but = 1;
          Serial.println("Recording...");
        }
        // Stop recording
        else if(but == 1)
        {
          but = 2;
        }
        // Begin replaying
        else if(but == 2)
        {
          Serial.println("Replay!");
          Serial.print("Done returning to default");
          replay(); // Drive motors in loop to replay actions
        }
      }

      // Clear recording
      else 
      {
        Serial.println("Resetting");

        // Reset all items
        for(int i = 0; i < cnt; i++)
        {
          arr[i] = 0;
        }

        but = 0;
        cnt = 0;
      }
    }
    // ********************************************************
   //delay(100);
  }
  // ********************************************************
}
// ********************************************************

// ********************************************************
// Current sensor data
void sensorData()
{
  float totalCurrent = 0.0;

  // Take multiple readings and sum them up
  for (int i = 0; i < sampleSize; i++) {
    int sensorValue = analogRead(CURR); // Read the analog sensor value (0-1023)
    float voltage = sensorValue * (5 / 1023.0); // Convert to voltage
    float current = ((voltage - 2.5) / sensitivity) + offset; // Calculate current in Amps
    totalCurrent += current; // Sum up the current readings
    delay(sampleDelay); // Delay between samples
  }

  // Calculate the average current
  float averageCurrent = totalCurrent / sampleSize;

  // Print results
  Serial.print("Average Current: ");
  Serial.print(averageCurrent);
  Serial.println(" A");

  // Record original current data
  curr = data1;
  data1 = averageCurrent;

  // If previous data is not equivalent to current data, there has been a change
  if(curr != data1){
    Serial.println("Sensor data changed");
    changeS = true; // Sensor data has updated
  }

  // If sensor data has updated, send it
  if(changeS)
  {
    sendCAN(SEN, 1, data1, 0); // CAN Sensor ID is 0x100, data is [] bytes, data is data1, 0th frame
    changeS = false; // Sensor data sent, reset the change
  }
  delay(100); // Delay for 100ms
}
// ********************************************************

// ********************************************************
// Encoder data
void encData()
{
  // Find correct angle
  ReadAngle();
  correctAngle();
  // Record original encoder data
  enc = data2;
  // Read the angle in degrees
  data2 = correctedAngle;// as5600.readAngle();

  if(enc != data2)
  {
    Serial.println("Encoder data changed");
    // Print the angle to the Serial Monitor
    Serial.print("Angle: ");
    Serial.println(data2);
    changeE = true; // Encoder data has updated
  }

  // If encoder data has updated, send it
  if(changeE)
  {
    sendCAN(ENC, 1, data2, 0); // CAN Encoder ID is 0x200
    changeE = false; // Encoder data sent, reset the change
  }  
  delay(100); // Delay for 100ms
}
// ********************************************************

// ********************************************************
// Encoder, read data from it then correct the angle
void ReadAngle()
{
  Wire.beginTransmission(0x36);
  Wire.write(0x0D);
  Wire.endTransmission();
  Wire.requestFrom(0x36, 1);

  while(Wire.available() == 0);
  lowbyt = Wire.read();

  Wire.beginTransmission(0x36);
  Wire.write(0x0C);
  Wire.endTransmission();
  Wire.requestFrom(0x36, 1);

  while(Wire.available() == 0);  
  highbyt = Wire.read();

  highbyt = highbyt << 8;
  rawAngle = highbyt | lowbyt;
  degAngle = rawAngle * 0.087890625;
}
// ********************************************************

// ********************************************************
//Correct angle function to read from encoder proper.
void correctAngle()
{
  correctedAngle = degAngle - startAngle;
  
  if(correctedAngle < 0)
  {
    correctedAngle = correctedAngle + 360;
  }

  else{ }
  
}
// ********************************************************

// ********************************************************
// Drive motor
void drive(int val)
{
  bool flip = false;
  struct can_frame canMsg;
  Serial.println("Drive");
  pull = 0;

  if (eStopTriggered) return;  // Exit immediately if E-stop is active

  // Can frame sent, move motor forward
  while(val > 128 && !flip)
  {
    if (eStopTriggered) 
    {
        //freeze();
        val = 0;
        return; // Exit immediately if E-stop is triggered
    }
    pull++;
    Serial.println("Pull Incresed");
    
    // Move motor speed according to joystick intensity. 
    // Slow->Fast
    if(val < 200)
    {
      digitalWrite(DIR, LOW);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(5000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(5000);
    }
    else if(val < 240)
    {
      digitalWrite(DIR, LOW);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(3000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(3000);
    }
    else
    {
      digitalWrite(DIR, LOW);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(1000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(1000);
    }

    if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.can_id == RAS && canMsg.data[MOT] != val)
    {
      val = canMsg.data[MOT];
      Serial.print("Motor Value: ");
      Serial.println(val);
      // delay(100);
    }
      //Check sensor and encoder data
    sensorData();
    encData();
/*
    if(pull > 30)
    {
      break;
    }*/
  }

  delay(500); //Delay for middle axis(G2), which steps at a different rate then the other axes. 

   // Can frame sent, move motor backwards
  while(val < 128 && val > 0 && canMsg.can_id != EST)
  {
    if (eStopTriggered) 
    {
      //freeze();
      val = 0;
      return; // Exit immediately if E-stop is triggered
    }
    pull++;
    Serial.println("Pull Incresed");

    // Move motor speed according to joystick intensity. 
    // Fast->Slow
    if(val < 100)
    {
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(1000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(1000);
    }
    else if(val < 120)
    {
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(3000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(3000);
    }
    else
    {
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(5000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(5000);
    }

    if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.can_id == RAS && canMsg.data[MOT] != val)
    {
      val = canMsg.data[MOT];
      Serial.print("Motor Value: ");
      Serial.println(val);
      //delay(100);
    } 
    //Check sensor and encoder data
    sensorData();
    encData();

  }

  if (eStopTriggered) 
  {
      //freeze();
      val = 0;
      return; // Exit immediately if E-stop is triggered
  }

  Serial.print("Exit drive ");
}
// ********************************************************

// ********************************************************
// Drive function specifically for replay()
// For now using 3 second polling for movements (and keyframes)
void drive2(int val, int x)
{
  struct can_frame canMsg;
  int i = 0;
  Serial.print("Value:");
  Serial.println(val);
  // If forward movement
  if(val > 128)
  {
    while(pol[x])
    {
      // Joystick intensity
      if(val < 200)
      {
        digitalWrite(DIR, LOW);
        // digitalWrite(ENA, HIGH);
        digitalWrite(PUL, HIGH);
        delayMicroseconds(5000);
        digitalWrite(PUL, LOW);
        delayMicroseconds(5000);
      }
      else if(val < 240)
      {
        digitalWrite(DIR, LOW);
        // digitalWrite(ENA, HIGH);
        digitalWrite(PUL, HIGH);
        delayMicroseconds(1000);
        digitalWrite(PUL, LOW);
        delayMicroseconds(1000);
      }
      else
      {
        digitalWrite(DIR, LOW);
        // digitalWrite(ENA, HIGH);
        digitalWrite(PUL, HIGH);
        delayMicroseconds(500);
        digitalWrite(PUL, LOW);
        delayMicroseconds(500);
      }

      i++;
      if(i > pol[x])
      {
        break;
      }
      // If replay button is pressed again, interrupt and stop
      if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.can_id == REP)
      {
        break;
      }
      if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.can_id == EST && canMsg.data[0] == 1)
      {
        freeze();
      }
    }
    
  }
  // If backwards movement
  else if(val < 128 && val > 0)
  {
    while(pol[x])
    {
    
    // Move motor speed according to joystick intensity. 
    // Fast->Slow
    if(val < 100)
    {
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(500);
      digitalWrite(PUL, LOW);
      delayMicroseconds(500);
    }
    else if(val < 120)
    {
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(1000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(1000);
    }
    else
    {
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(5000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(5000);
    }

    i++;
      if(i > pol[x])
      {
        break;
      }
      // If replay button is pressed again, interrupt and stop
      if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.can_id == REP)
      {
        break;
      }
      if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.can_id == EST && canMsg.data[0] == 1)
      {
        freeze();
      }
    }
  }
    Serial.print("Poll: ");
  Serial.println(pol[x]);
}
// ********************************************************

// ********************************************************
// Use array to move through recorded data
void replay()
{
  struct can_frame canMsg;
  Serial.println("replay() entered");

  if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK && canMsg.data[0] == 3)
  {
    // freeze();
  }
  else
  {
    for(int i = 0; i < cnt; i++)
    {
      Serial.println("Loop");
      drive2(arr[i], i);
      delay(100);
    }
  }

  delay(500); // Add delay before resetting
}
// ********************************************************

// ********************************************************
// Freeze all MCUs (Emergency Stop)
void freeze()
{
  struct can_frame canMsg;
  bool reset = false;

  digitalWrite(ENA, HIGH);
  while(!reset)
  { 
    eStopTriggered = false;  // Reset the flag to allow normal operations
    Serial.println("Frozen!");
    delay(100);
    // If button is re-pressed, unfreeze 
    if(mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK)
    {
      // E-stop CAN ID
      if(canMsg.can_id == EST && canMsg.data[0] == 0) {
        reset = true;
        digitalWrite(ENA, LOW);
        delay(100);
        Serial.println("Unfreeze!");
      }
    }
  }
  // Wait 3 seconds to reset
  delay(3000);
  // Reset motors back to default state! This will need to record where the motors are. Reset them to 0? We'll have to record data.
  //toDefault();
}
// ********************************************************

// ********************************************************
// Reset motor to default positioning
/*
void toDefault()
{
  Serial.println("returning to default");
  // need the math here to reset motors to default positioning
  // get encoder data of current position
  // find number of steps were made from 0 at this angle; angle/1.8
  // drive motor back that amount of steps via for-loop
  float steps; 

  if(data2 != 0)
  {
    steps = data2/1.8; 
    steps = 200;

    // Drive motor back to correct position
    for(int i = steps; i > 0; i--)
    {
      // Drive motors backwards to 0
      digitalWrite(DIR, HIGH);
      // digitalWrite(ENA, HIGH);
      digitalWrite(PUL, HIGH);
      delayMicroseconds(1000);
      digitalWrite(PUL, LOW);
      delayMicroseconds(1000);
    }
  //}
}*/
// ********************************************************

// ********************************************************
// Blink LED 10 times to signal send error
void blink()
{
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
}
// ********************************************************
