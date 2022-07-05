#include<reg51.h>
#include"LCD8bit.h"
sbit sw=P2^7;

main()
{
  int count=0;
  lcd_init();
  lcd_cmd(0xC);
  lcd_data(count/10+48);
	lcd_data(count%10+48);
	 while(1)
	 {
		 count=-1;
		 do
		 {
			 if(sw==0)
			 {
			 delay_ms(50);// To avoid keybouncing
			 count++;
			 while(sw==0);//
       lcd_cmd(0x01);
				 
				lcd_data(count/10+48);
        lcd_data(count%10+48);
		   }
	  }while(count<59);
	 }
}
				 
				 
		