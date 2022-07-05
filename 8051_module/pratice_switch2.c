#include<reg51.h>
#include"LCD8bit.h"
sbit sw1=P2^0;
sbit sw2=P2^1;
sbit sw3=P2^2;
main()
{
	unsigned char count=0;
	lcd_init();
	lcd_cmd(0xC);
	lcd_cmd(0x80);
	lcd_data(count/10+48);
	lcd_data(count%10+48);
	
	while(1)
	{
		count=-1;
		do
		{
			 if(sw1==0)
			 {
			     delay_ms(50);
				 count++;
			     while(sw1==0);
				   lcd_cmd(0x80);
				   lcd_cmd(0x01);
				   lcd_data(count/10+48);
           		   lcd_data(count%10+48);
				   
		   }
	     else if(sw2==0)
		   {
  		   delay_ms(50);
				 if(count>0)
			   count--;
			   while(sw2==0);
			   lcd_cmd(0x80);
				 lcd_cmd(0x01);
			     lcd_data(count/10+48);
                 lcd_data(count%10+48);
			 }
		   else if(sw3==0)
		   {
			    delay_ms(50);
			    while(count--)
					{
				     	lcd_cmd(0x80);
				    	lcd_cmd(0x01);
				        lcd_data(count/10+48);
                        lcd_data(count%10+48);
				        delay_ms(1000);
					}
			 }
			 
	  }while(count<59);
 }
}			