#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Display.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void initializeDisplay(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(10,20);
  display.println("Optical Sensor");
  display.display();
  delay(1500);
}

void displayValues(float bilirubin,float glucose){
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0,5);
  display.print("Bilirubin:");
  display.setCursor(0,20);
  display.print(bilirubin,2);
  display.print(" mg/dL");

  display.setCursor(0,40);
  display.print("Glucose:");
  display.setCursor(0,55);
  display.print(glucose,2);
  display.print(" mg/dL");
  display.display();
}
