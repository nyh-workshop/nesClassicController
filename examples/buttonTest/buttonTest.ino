#include "nesClassicController.h"

nesClassicController ncc;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ncc.init();
  Serial.println("Testing NES classic controller buttons: ");
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // Read the buttons:
  ncc.readButtons();
  if( ncc.button_A() )      { Serial.println("Button A is pressed!\n"); }
  if( ncc.button_B() )      { Serial.println("Button B is pressed!\n"); }
  if( ncc.button_Start() )  { Serial.println("Button Start is pressed!\n"); }
  if( ncc.button_Select() ) { Serial.println("Button Select is pressed!\n"); }
  if( ncc.button_Up() )     { Serial.println("Button Up is pressed!\n"); }
  if( ncc.button_Left() )   { Serial.println("Button Left is pressed!\n"); }
  if( ncc.button_Right() )  { Serial.println("Button Right is pressed!\n"); }
  if( ncc.button_Down() )   { Serial.println("Button Down is pressed!\n"); }

  delay(250);

}
