#include<reg51.h>
#include"LCD8bit.h"
main()
{
	char i;
	lcd_init();
	lcd_cmd(0xC);
	
	lcd_cmd(0x85);
	lcd_string("SATISH");
	
	for(i=0;i<5;i++)
	{
	lcd_cmd(0xC5);
	lcd_string("PATIL");
	delay_ms(1000);
	lcd_cmd(0x01);
	lcd_cmd(0x85);
	lcd_string("SATISH");
	delay_ms(1000); 
	}
	lcd_cmd(0xC5);
	lcd_string("PATIL");
	while(1);
}	