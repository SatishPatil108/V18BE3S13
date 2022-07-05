#include<reg51.h>
#include"LCD8bit.h"
main()
{
	char i;
	lcd_init();
	lcd_cmd(0xC);
	

	lcd_cmd(0x85);
  lcd_string("SATISH");
	
	for(i=0;i<16;i++)
	{
		lcd_cmd(0xC0+i);
		lcd_string("PATIL");
		delay_ms(1000);
		lcd_cmd(0x01);
		delay_ms(1000);
		
		lcd_cmd(0x85);
		lcd_string("SATISH");
	}
	while(1);
}