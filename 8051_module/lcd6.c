#include<reg51.h>
#include"LCD8bit.h"
main()
{
	lcd_init();
	lcd_cmd(0x80);
	lcd_string("SATISH");
	
	lcd_cmd(0xC0);
	lcd_string("PATIL");
	while(1);
}