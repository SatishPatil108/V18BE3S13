#include<reg51.h>
#include"LCD8bit.h"
main()
{
	lcd_init();
	lcd_cmd(0x80);//starting point
	//lcd_cmd(0x87);// at the middle
	lcd_data('A');
	lcd_cmd(0xC0);//to next line
	lcd_data('B');
	while(1);
}
	