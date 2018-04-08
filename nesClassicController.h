// NES Classic Controller driver. (header and defines)
// 2018 uncle-yong.

#ifndef  NESCLASSICCONTROLLER_H
#define  NESCLASSICCONTROLLER_H

// Defines for the buttons:
#define BUTTON_A        0X0010
#define BUTTON_B        0X0040
#define BUTTON_START    0X0400
#define BUTTON_SELECT   0X1000
#define BUTTON_UP       0X0001
#define BUTTON_LEFT     0X0002
#define BUTTON_RIGHT    0X8000
#define BUTTON_DOWN     0X4000

class nesClassicController {
 
  public:
  void init();
  void readButtons();
  inline bool button_A()       { return (tempButtons & BUTTON_A)      >> 4;  }
  inline bool button_B()	   { return (tempButtons & BUTTON_B)      >> 6;  }
  inline bool button_Start()   { return (tempButtons & BUTTON_START)  >> 10; }
  inline bool button_Select()  { return (tempButtons & BUTTON_SELECT) >> 12; }
  inline bool button_Up()      { return (tempButtons & BUTTON_UP)     >> 0;  }
  inline bool button_Left()    { return (tempButtons & BUTTON_LEFT)   >> 1;  }
  inline bool button_Right()   { return (tempButtons & BUTTON_RIGHT)  >> 15; }
  inline bool button_Down()    { return (tempButtons & BUTTON_DOWN)   >> 14; }

  private:
  unsigned char i2cBuffer[8];
  unsigned short tempButtons;
  const unsigned char address = 0x52;
  bool buttons[8];
};


#endif 
