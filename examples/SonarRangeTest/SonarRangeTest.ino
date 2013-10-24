#include <SoftwareSerial.h>
#include <SonarRange.h>
/*
  SonarRange Test - Test the basic operation of the SonarRange Library
  Created by Jesse Hess, October 2013
  Modified BSD license
*/
#define PIN_D4 4 // sensor PW to arduino D4
#define PIN_A0 0 // sensor AN to arduino A0
#define PIN_D7 7 // sensor TX to arduino D7

SonarRange sonarRange = SonarRange();

void setup() {
  Serial.begin(57600);
  while (!Serial) { ; }
  Serial.println(F("SonarRange Test"));
  sonarRange.setUnit(RangeUnit_IN);
  // digital pin for Serial, analog pin for Analog, digital pin for Pulse Width
  sonarRange.setPins(PIN_D7); sonarRange.setOutput(RangeOutput_Serial);
//  sonarRange.setPins(PIN_A0); sonarRange.setOutput(RangeOutput_Analog);
//  sonarRange.setPins(PIN_D4); sonarRange.setOutput(RangeOutput_Pulse); 
  sonarRange.printSetup();
  sonarRange.begin();
}

void loop() {
  Serial.println(sonarRange.read());
  delay(50);
}
