#include <Servo.h>

Servo gripper; // Servo for the gripper
int gripperPosition = 0; // Initial position (0 degrees)
bool buttonState = false; // Tracks the button toggle state

void setup() {
  Serial.begin(9600); // Start serial communication with the MacBook
  gripper.attach(9);  // Attach the servo to pin 9
  gripper.write(gripperPosition);  // Set initial position of the gripper
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();  // Read the serial input

    if (receivedChar == '1') {
      buttonState = !buttonState; // Toggle button state
      gripperPosition = buttonState ? 130 : 0; // Open or close the gripper
      gripper.write(gripperPosition); // Move the servo to the new position
    }
  }
}