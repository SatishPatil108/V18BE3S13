#include<reg51.h>
#include"LCD8bit.h"
main()
{
  char i;
	lcd_init();
	lcd_cmd(0xC);
	
	for(i=0;i<16;i++)
	{
	lcd_cmd(0x80+i);//for shifting one by one to right side
	lcd_string("PATIL");
		delay_ms(1000);
	lcd_cmd(0x01);//clear the screen
	}
	while(1);
}