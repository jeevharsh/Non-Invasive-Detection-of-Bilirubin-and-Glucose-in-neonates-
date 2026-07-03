#ifndef SIGNALPROCESSING_H
#define SIGNALPROCESSING_H

void initializeSensor(int pin);
float readSensorVoltage();
float calculateBilirubin(float voltage);
float calculateGlucose(float voltage);

#endif
