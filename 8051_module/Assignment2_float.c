#include<reg51.h>
#include"LCD8bit.h"
void main()
{
  lcd_init();
	lcd_cmd(0xC);
	lcd_cmd(0x80);
	//lcd_float(-12.34);
	 lcd_int(125);
	while(1);
}