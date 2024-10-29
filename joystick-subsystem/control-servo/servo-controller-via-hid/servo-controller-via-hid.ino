#include <Servo.h>

Servo gripper; // Servo for the gripper
int gripperPosition = 0; // Initial position (0 degrees)
bool buttonState = false; // Tracks the button toggle state
unsigned long responseStartTime = 0;  // Time when action started (in microseconds)
unsigned long responseEndTime = 0;    // Time when the action is completed (in microseconds)

void setup() {
  Serial.begin(9600); // Start serial communication with the MacBook
  gripper.attach(9);  // Attach the servo to pin 9
  gripper.write(gripperPosition);  // Set initial position of the gripper
}

void loop() {
  if (Serial.available() > 0) {
    String receivedString = Serial.readStringUntil('\n');  // Read the serial input until newline
    
    if (receivedString.length() > 0) {  // Make sure we received something
      responseStartTime = micros();  // Capture the start time in microseconds

      // Toggle the button state and move the servo accordingly
      buttonState = !buttonState;
      gripperPosition = buttonState ? 130 : 0;
      gripper.write(gripperPosition);  // Command servo to move

      // Wait until the servo has reached the target position
      while (gripper.read() != gripperPosition) {
        // Servo is still moving; loop until it reaches the target position
      }

      // Capture the end time after the servo has finished moving
      responseEndTime = micros();

      // Calculate and print the response time in microseconds
      unsigned long responseTime = (responseEndTime - responseStartTime)/100;
      Serial.print("Response time (ms): ");
      Serial.println(responseTime);  // Send the response time back to Python

      // Send a signal indicating the servo has finished moving
      Serial.print("Servo at position: ");
      Serial.println(gripperPosition);
    }
  }
}
