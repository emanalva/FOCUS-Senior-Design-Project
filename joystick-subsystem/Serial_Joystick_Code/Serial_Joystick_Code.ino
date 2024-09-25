// Joystick pins
const int joy1X = A0;
const int joy1Y = A1;

const int joy2X = A2;
const int joy2Y = A3;

// Button pins
const int button1 = 0;
const int button2 = 1;
const int button3 = 2;

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set button pins as input
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
  // Read joystick 1 values
  int joy1XVal = analogRead(joy1X);
  int joy1YVal = analogRead(joy1Y);

  // Read joystick 2 values
  int joy2XVal = analogRead(joy2X);
  int joy2YVal = analogRead(joy2Y);

  // Read button values
  int button1Val = digitalRead(button1);
  int button2Val = digitalRead(button2);
  int button3Val = digitalRead(button3);

  // Print joystick 1 values
  Serial.print("Joystick 1 - X: ");
  Serial.print(joy1XVal);
  Serial.print(", Y: ");
  Serial.print(joy1YVal);
  
  // Print joystick 2 values
  Serial.print(" | Joystick 2 - X: ");
  Serial.print(joy2XVal);
  Serial.print(", Y: ");
  Serial.print(joy2YVal);
  
  // Print button values
  Serial.print(" | Button 1: ");
  Serial.print(button1Val);
  Serial.print(" | Button 2: ");
  Serial.print(button2Val);
  Serial.print(" | Button 3: ");
  Serial.print(button3Val);
  
  Serial.println();

  // Short delay before the next loop
  delay(500);
}
