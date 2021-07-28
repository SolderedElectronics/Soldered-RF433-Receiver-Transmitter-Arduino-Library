/**
 **************************************************
 *
 * @file        Transmitter.ino
 * @brief       Transmitter example for RF433 antena
 *
 *
 *
 * @authors     @ soldered.com, Robert Peric
 * @link        www.solde.red/333067
 ***************************************************/

#include "RF433-SOLDERED.h"
#include "SPI.h"
// pin 12 for data
 
RF433 driver;  
uint8_t buff[2];  
uint8_t bufflen = sizeof(buff); 
uint16_t value; // variable that will store ADC values
 
void setup() {
  Serial.begin(9600);
  if (!driver.init()) { // initialisation
    Serial.println("init failed");
  }
}
 
void loop() {
  value = analogRead(0); 
  buff[0] = value; 
  buff[1] = (value >> 8); 
  driver.send(buff, &bufflen); 
  driver.waitPacketSent(); 
  delay(200);
}