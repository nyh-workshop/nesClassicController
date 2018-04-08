// NES Classic Controller driver.
// 2018 uncle-yong.

#include "nesClassicController.h"
#include <Wire.h>

void nesClassicController::init() {
  // Init the controller first!
  Wire.begin();
  // Non-encrypted setting message:
  Wire.beginTransmission(address);
  Wire.write(0xF0);
  Wire.write(0x55);
  Wire.endTransmission();
  Wire.beginTransmission(address);
  Wire.write(0xFB);
  Wire.write(0x00);
  Wire.endTransmission();
  
}

void nesClassicController::readButtons() {
  // Send a read command:
  Wire.beginTransmission(address);
  Wire.write(0);
  Wire.endTransmission();
  Wire.requestFrom((int)address, 8);
  
  // Dump it into the i2c buffer:
  for (unsigned char i = 0; i < 8; i++) {
    i2cBuffer[i] = Wire.read();
  }
  
  // Take the last two bytes and merge them into the "tempButtons" variable, and invert it.
  tempButtons = ~( (i2cBuffer[6] << 8) | i2cBuffer[7] );

}


