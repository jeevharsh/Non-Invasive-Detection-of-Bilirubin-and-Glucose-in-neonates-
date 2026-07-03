#include <Arduino.h>
#include "SignalProcessing.h"

int sensorPin;

void initializeSensor(int pin){
  sensorPin = pin;
  pinMode(sensorPin, INPUT);
}

float readSensorVoltage(){
  int adcValue = analogRead(sensorPin);
  return (adcValue * 3.3f) / 4095.0f;
}

float calculateBilirubin(float voltage){
  float bilirubin = 12.0f - (2.4f * voltage);
  if(bilirubin < 0) bilirubin = 0;
  return bilirubin;
}

float calculateGlucose(float voltage){
  float glucose = 160.0f - (35.0f * voltage);
  if(glucose < 0) glucose = 0;
  return glucose;
}
