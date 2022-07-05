#include<reg51.h>
#include"LCD8bit.h"
#include"keypad.h"
main()
{
  unsigned char temp;
  lcd_init();
  while(1)
  { 
    temp=keyscan();
    lcd_data(temp); 
  }
}