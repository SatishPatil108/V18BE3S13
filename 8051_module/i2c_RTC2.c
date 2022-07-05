#include<reg51.h>
#include"delay.h"
#include"UART.h"
#include"LCD8bit.h"
#include"i2c.h"
#include"i2c_device.h"
void main()
{
	unsigned int temp=0;
	unsigned char ch=0,temp1=0;
	uart_init(9600);
	lcd_init();

	/************** SCAN the DATA  from USER **************/

	/*********** Setting the Seconds ************/
	uart_string("\r\n Enter the seconds  :");
	while(1)
	{
        ch=uart_rx();
		if(ch=='\r')
		break;
        temp=(temp*10+(ch-48));
	}			
	temp1=((temp%10)+(temp/10)*16);
	i2c_device_write(0xD0,0x0,temp1);// write the Seconds
	temp=0;
	/****************Setting the Minutes **********/
	uart_string("\r\n Enter the Minute   :");
	while(1)
	{
	  ch=uart_rx();
	  if(ch=='\r')
	  break;
	  temp=(temp*10+(ch-48));
	}		
	temp1=((temp%10)+(temp/10)*16);
	i2c_device_write(0xD0,0x1,temp1);// write the Minutes
	temp=0;
	/***************Setting the Hours **************/
	uart_string("\r\n Enter the Hour     :");
	while(1)
	{
	  ch=uart_rx();
      if(ch=='\r')
	  break;
      temp=(temp*10+(ch-48));
    }
	temp1=((temp%10)+(temp/10)*16);                                                                                                                     
 	i2c_device_write(0xD0,0x2,temp1);// write the Hours
	temp=0;
  /********************Setting the DAY *****************/
	uart_string("\r\n Enter the DAY      :");
	while(1)
	{
	 ch=uart_rx();
     if(ch=='\r')
	 break;
	 temp=(temp*10+(ch-48));
	}
   temp1=((temp%10)+(temp/10)*16);
   i2c_device_write(0xD0,0x3,temp1);
   temp=0;
  /*****************Setting the DATE **********************/
	uart_string("\r\n Enter the Date     :");
	while(1)
	{
	  ch=uart_rx();
	  if(ch=='\r')
	  break;
      temp=(temp*10+(ch-48));
	}
	temp1=((temp%10)+(temp/10)*16);
    i2c_device_write(0xD0,0x4,temp1);//write the Date
	temp=0;
   /****************Setting the Month************************/	
   uart_string("\r\n Enter the Months   :");
	while(1)
	{
	  ch=uart_rx();
	  if(ch=='\r')
	  break;
   	  temp=(temp*10+(ch-48));
	}		
	temp1=((temp%10)+(temp/10)*16);
 	i2c_device_write(0xD0,0x5,temp1);//write the Month
	temp=0;
	/***********Setting the YEAR ********************/
	uart_string("\r\n Enter the YEAR     :");
  while(1)
	{
	  ch=uart_rx();
	  if(ch=='\r')
      break;
      temp=(temp*10+(ch-48));
	}		
	temp1=((temp%10)+(temp/10)*16);
    i2c_device_write(0xD0,0x6,temp1);//write the Year
	temp=0;
	/*************** Read RTC time & Displaying ************************/
	while(1)
	{
	    lcd_cmd(0x80);
		lcd_string("TIME:");
	    temp=i2c_device_read(0xD0,0x2);// Read the Hours
	  	lcd_data(temp/16+48);
		lcd_data(temp%16+48);
		lcd_data(':');
		if(temp>=18)
		{
		  lcd_cmd(0x80+13);
		  lcd_string("PM");
		}
		else
		{
		 lcd_cmd(0x80+13);
		 lcd_string("AM");
		}
		temp=0;
		lcd_cmd(0x88);
	    temp=i2c_device_read(0xD0,0x1);//Read the Minutes
		lcd_data(temp/16+48);
		lcd_data(temp%16+48);
		lcd_data(':');
		temp=0;

		temp=i2c_device_read(0xD0,0x0);// Read the seconds
		lcd_data(temp/16+48);
		lcd_data(temp%16+48);
	  	
		temp=0;
		lcd_cmd(0xC0);
	    temp=i2c_device_read(0xD0,0x4);//Read the DATE
		lcd_data(temp/16+48);
		lcd_data(temp%16+48);
		lcd_data('/');
		
		temp=0;
		temp=i2c_device_read(0xD0,0x5);//Read the month
		lcd_data(temp/16+48);
		lcd_data(temp%16+48);
		lcd_data('/');
		
		temp=0;
		temp=i2c_device_read(0xD0,0x6);//Read The YEAR
		lcd_data(temp/16+48);
		lcd_data(temp%16+48);
	
        temp=i2c_device_read(0XD0,0x3);// Read the DAY
	    switch(temp)
		 {
			  case 1:lcd_string("SUNDAY");
			         break;
			
			  case 2:lcd_string("MONDAY");
			         break;
			
			  case 3:lcd_string("TUESDAY");
			         break;
			  
			  case 4:lcd_string("WENESDAY");
			         break;
			  case 5:lcd_string("THURSDAY");
			         break;
			 
			  case 6:lcd_string("FRIDAY");
			         break;
			
			  case 7:lcd_string("SATURDAY");
			         break;
				 
			  default:lcd_string("OUT OF DAY");
				      break;
		} 
	}
}
		
				
		
		
		
	
	