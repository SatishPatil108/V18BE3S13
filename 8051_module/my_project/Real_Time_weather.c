#include"header.h"
sbit sw1=P2^7;

void main()
{  
	uart_init(9600);
	lcd_init();
	DS1621_init();
	uart_string("\r\n*********************WELCOME*************************** \r\n ");
	uart_string("\r\n*************Real Time Weather Monitoring System**********\r\n");
	lcd_cmd(0x80);
   	RTC_TIME();	//  Setting the Time
        uart_string("\r\n LOGID    TIME    TEMPERATURE  LIGHT INTENSITY\r\n");
	
	while(1)
	{
	   my_RTC_readtime();  // Read the time
	   temp_read();		   // Read the TEMP
	   LDR_read();		   // Read the Intensity
		 
		 if(sw1==0)
		 {
			 delay_ms(50);// Avoid keybouncing
			 EEPROM_Write_data();
                         EEPROM_Read_data();
		 }	 
		 
  }
}
