#include<reg51.h>
#include"LCD8bit.h"
main()
{
	lcd_init();
	lcd_cmd(0x8F);
	lcd_data('A');
	
	lcd_cmd(0xC0);
	lcd_data('B');
	while(1);
	
}