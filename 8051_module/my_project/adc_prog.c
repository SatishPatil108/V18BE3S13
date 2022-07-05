#include<reg51.h>
#include"delay.h"
#include"LCD8bit.h"
#include"ADC.h"
void main()
{
	unsigned int temp;
	lcd_init();
	lcd_cmd(0x80);
	while(1)
	{
		temp=read_adc(0,1);
		lcd_cmd(0x1);
		lcd_int(temp);
		delay_ms(100);
	}
}

