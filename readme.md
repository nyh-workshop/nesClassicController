# NES Classic Controller Driver for Arduino

Basically, these controllers are with the Nintendo Wii port and they are using the normal I2C protocol.

**Note: You need to use the hardware I2C (the SDA and SCL pins) on the Arduino!**

For a less messy test, you can use the WiiChuck adapter which is available at low prices in eBay. All you need are four male-female jumpers.

![alt tag](https://github.com/uncle-yong/nesClassicController/blob/master/wii-nunchuck-adapter-arduino.jpg)

### Connection:
- SCL   -> c
- SDA   -> d
- +3.3V -> +
- GND   -> -

There is a simple test app in the library if you want to test the controller. The test shows what button you have pressed in the serial terminal window.

### Requirements:
- Arduino Uno
- Four jumpers (male-to-female)
- Wii Nunchuck adapter breakout
- NES Classic Controller

### References:
- https://github.com/coopermaa/Wiichuck/blob/master/-Wiichuck.cpp
- https://gist.github.com/DavisDev/e6ca7169b669504255e96963137318b0
