#include <LiquidCrystal.h>

// Pin Definitions
#define MOISTURE_SENSOR_PIN A0  // Analog pin for analog output
#define RS 8
#define E 9
#define D4 10
#define D5 11
#define D6 12
#define D7 13

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);  // Initialize the LCD with 16 columns and 2 rows
}

void loop() {
  int sensorValue = analogRead(MOISTURE_SENSOR_PIN);

  // Map the sensor value to moisture level
  String moistureLevel;
  if (sensorValue > 600) {  // You may need to adjust this threshold based on your sensor
    moistureLevel = "Dry";
  } else if (sensorValue > 400) {
    moistureLevel = "Moist";
  } else {
    moistureLevel = "Wet";
  }

  // Print Sensor Value to Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.println();

  // Display Moisture Level on LCD
  lcd.clear();  // Clear previous data
  lcd.setCursor(0, 0);  // Set cursor to the first column of the first row
  lcd.print("Soil Moisture:");
  lcd.setCursor(0, 1);  // Set cursor to the first column of the second row
  lcd.print(moistureLevel);

  delay(1000);  // Update every 5 seconds
}
