#include<reg51.h>
#include"LCD8bit.h"
main()
{
	unsigned char i=0,s1[]="PATIL",j=0,k=0;
	lcd_init();
	
		lcd_cmd(0xC);
		for(i=0;i<16;i++)
		{
			lcd_cmd(0x80+i); 	
			lcd_string(s1);
			delay_ms(500);
			lcd_cmd(0x01);
			delay_ms(500);
		}
		
		for(i=15;i>=0;i--)
		{
			lcd_cmd(0xC0+i); 
			lcd_cmd(0x07);					
			lcd_string(s1);
			delay_ms(500);
			lcd_cmd(0x01);
			delay_ms(500);
		}
   while(1);
}		
		
		