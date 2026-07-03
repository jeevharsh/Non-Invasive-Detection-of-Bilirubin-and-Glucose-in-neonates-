#include <Wire.h>
#include "SignalProcessing.h"
#include "Display.h"

#define SENSOR_PIN 34

float bilirubin;
float glucose;

void setup() {
  Serial.begin(115200);
  initializeDisplay();
  initializeSensor(SENSOR_PIN);
}

void loop() {
  float voltage = readSensorVoltage();
  bilirubin = calculateBilirubin(voltage);
  glucose = calculateGlucose(voltage);
  displayValues(bilirubin, glucose);

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V  Bilirubin: ");
  Serial.print(bilirubin);
  Serial.print(" mg/dL  Glucose: ");
  Serial.print(glucose);
  Serial.println(" mg/dL");

  delay(1000);
}
