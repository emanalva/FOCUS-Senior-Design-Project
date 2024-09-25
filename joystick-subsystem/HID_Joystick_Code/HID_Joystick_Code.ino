/*
  HID Joystick with Two Analog Joysticks and Three Buttons
  Compatible with ATmega32U4-based boards (In this case, we are emulating an Arduino Leonardo)
  
  Requirements:
  - Joystick Library by Matthew Heironimus
    GitHub: https://github.com/MHeironimus/ArduinoJoystickLibrary
*/

// Include the Joystick library
#include <Joystick.h>

// Create a Joystick instance
// Constructor Parameters:
// 1. hidReportId:              JOYSTICK_DEFAULT_REPORT_ID (0x03)
// 2. joystickType:             JOYSTICK_TYPE_JOYSTICK (0x04)
// 3. buttonCount:              3
// 4. hatSwitchCount:           0
// 5. includeXAxis:             true  (Joystick 1 X-axis)
// 6. includeYAxis:             true  (Joystick 1 Y-axis)
// 7. includeZAxis:             false
// 8. includeRxAxis:            true  (Joystick 2 X-axis)
// 9. includeRyAxis:            true  (Joystick 2 Y-axis)
// 10. includeRzAxis:           false
// 11. includeRudder:           false
// 12. includeThrottle:         false
// 13. includeAccelerator:      false
// 14. includeBrake:            false
// 15. includeSteering:         false

Joystick_ Joystick(
  JOYSTICK_DEFAULT_REPORT_ID,
  JOYSTICK_TYPE_JOYSTICK,
  3, // Number of buttons
  0, // Number of hat switches
  true,  // includeXAxis (Joystick 1 X-axis)
  true,  // includeYAxis (Joystick 1 Y-axis)
  false, // includeZAxis
  true,  // includeRxAxis (Joystick 2 X-axis)
  true,  // includeRyAxis (Joystick 2 Y-axis)
  false, // includeRzAxis
  false, // includeRudder
  false, // includeThrottle
  false, // includeAccelerator
  false, // includeBrake
  false  // includeSteering
);

// Pin Definitions
// Joystick pins
const int joy1X = A0; // Joystick 1 X-axis
const int joy1Y = A1; // Joystick 1 Y-axis
const int joy2X = A2; // Joystick 2 X-axis
const int joy2Y = A3; // Joystick 2 Y-axis

// Button pins (Active High)
const int button1 = 0; // Button 1
const int button2 = 1; // Button 2
const int button3 = 2; // Button 3

void setup() {
  // Initialize the Joystick library
  Joystick.begin();

  // Set axis ranges to match the mapped joystick values
  Joystick.setXAxisRange(-32767, 32767);   // Joystick 1 X-axis
  Joystick.setYAxisRange(-32767, 32767);   // Joystick 1 Y-axis
  Joystick.setRxAxisRange(-32767, 32767);  // Joystick 2 X-axis
  Joystick.setRyAxisRange(-32767, 32767);  // Joystick 2 Y-axis

  // Initialize button pins as INPUT since buttons are active high with external pull-down resistors
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
  // Read joystick 1 values (Analog)
  int joy1XVal = analogRead(joy1X); // Range: 0 - 1023
  int joy1YVal = analogRead(joy1Y); // Range: 0 - 1023

  // Read joystick 2 values (Analog)
  int joy2XVal = analogRead(joy2X); // Range: 0 - 1023
  int joy2YVal = analogRead(joy2Y); // Range: 0 - 1023

  // Define active movement range
  const int minAnalog = 0;
  const int maxAnalog = 1023;

  // Map analog readings (0-1000) to HID joystick range (-32767 to +32767)
  int32_t mappedJoy1X = map(constrain(joy1XVal, minAnalog, maxAnalog), minAnalog, maxAnalog, -32767, 32767);
  int32_t mappedJoy1Y = map(constrain(joy1YVal, minAnalog, maxAnalog), minAnalog, maxAnalog, -32767, 32767);
  int32_t mappedJoy2X = map(constrain(joy2XVal, minAnalog, maxAnalog), minAnalog, maxAnalog, -32767, 32767);
  int32_t mappedJoy2Y = map(constrain(joy2YVal, minAnalog, maxAnalog), minAnalog, maxAnalog, -32767, 32767);

  // Optional: Implement dead zones to prevent drift.
  // Optimized to within 0.00002 on a mapped scale from -1 to +1.
  // i.e. (-32767 to +32767) mapped to (-1 to +1), and within 0.00002 from dead center without input.
  // This is just the mapping the testing software "https://hardwaretester.com/gamepad" chose.
  const int32_t deadZone = 1000; // Adjust as necessary
  mappedJoy1X = (abs(mappedJoy1X) < deadZone) ? 0 : mappedJoy1X;
  mappedJoy1Y = (abs(mappedJoy1Y) < deadZone) ? 0 : mappedJoy1Y;
  mappedJoy2X = (abs(mappedJoy2X) < deadZone) ? 0 : mappedJoy2X;
  mappedJoy2Y = (abs(mappedJoy2Y) < 1500) ? 0 : mappedJoy2Y; // Needed larger deadzone

  // Update joystick axes
  Joystick.setXAxis(mappedJoy1X);   // Joystick 1 X-axis
  Joystick.setYAxis(mappedJoy1Y);   // Joystick 1 Y-axis
  Joystick.setRxAxis(mappedJoy2X);  // Joystick 2 X-axis
  Joystick.setRyAxis(mappedJoy2Y);  // Joystick 2 Y-axis

  // Read button states (Active High)
  bool currentButton1 = digitalRead(button1); // Button 1 state: HIGH or LOW
  bool currentButton2 = digitalRead(button2); // Button 2 state: HIGH or LOW
  bool currentButton3 = digitalRead(button3); // Button 3 state: HIGH or LOW

  // Update button states in the Joystick library
  Joystick.setButton(0, currentButton1); // Button 1
  Joystick.setButton(1, currentButton2); // Button 2
  Joystick.setButton(2, currentButton3); // Button 3

  // Send the updated state to the computer
  Joystick.sendState();

  // Short delay to ensure smooth USB communication
  delay(10);
}