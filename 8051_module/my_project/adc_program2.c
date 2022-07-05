#include<reg51.h>
#include"delay.h"
#include"LCD8bit.h"
#include"ADC.h"
void main()
{
	unsigned int temp=0;
	float v=0;
	lcd_init();
	lcd_cmd(0xC);
	while(1)
	{
		temp=read_adc(0,0);
		lcd_cmd(0x1);
		lcd_int(temp);
		v=(temp*5.0)/4095;
		lcd_cmd(0xC0);
		lcd_float(v);
		lcd_data('V');
		delay_ms(100);
	}
}
