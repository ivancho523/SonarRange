SonarRange
==========

This library is for the general use of the LV-MaxSonar-EZ1

Configuration
  Must have SoftwareSerial in your Arduino libraries
  LV-MaxSonar-EZ1 sensor
    Part Number: MB1010
    High performance Ultrasonic Range Finder
    Controlled Beam Angle
    Input: 2.5V to 5.5V DC at <3mA
    Output: Serial, Analog Voltage, Pulse Width
  LV-MaxSonar Pin Out
    GND Circuit common and DC return
    +5  Vcc operates on 2.5V to 5.5V DC
    TX  Delivers serial with an RS232 format when BW is set low. When BW pin is set high, it sends a single pulse, for chaining
    RX  Hold high (or open) for ranging. Hold low, to stop ranging. Bring pin high for >20us to command ranging
    AN  Analog voltage output. Scaling factor is (Vcc/512) per inch. A 5V supply yields ~9.8mV/in
    PW  Pulse width representation with a scale factor 147uS per inch
    BW  Leave open (or low) for serial output on TX. Hold high for chaining

Installation
  Serial
    GND, +5, TX
  Analog
    GND, +5, AN
  Pulse Width
    GND, +5, PW

File Manifest
  SonarRange.h
  SonarRange.cpp

Copyright
  MaxSonar, MaxBotix, and EZ1 are trademarks of MaxBotix Inc
  www.maxbotix.com
  patent 7,679,996

License
  Modified BSD license, specified in license.txt

Known Bugs
  none

Change Log
  October 2013
    Initial version

Ideas for future features and notes
  -sample ranges without blocking? allow setting sample rate (50ms or greater), needs threading?
  -return mean/average/mode value based on a list of recent samples
  -function to know if range is increasing or decreasing based on a list of recent samples (-1,0,1)
  -RX pin set to low stop getting range data
  -BW pin set to high makes TX output a pulse for low noise chaining
  -calculate speed and acceleration
