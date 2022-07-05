#include<reg51.h>
#include"LCD8bit.h"
#include"i2c.h"
#include"i2c_device.h"
void main()
{
	unsigned char temp;
	lcd_init();
	/*  setting RTC time to 11:59:50 pm */
	i2c_device_write(0xD0,0x2,0x23);
	i2c_device_write(0xD0,0x1,0x59);
	i2c_device_write(0xD0,0x0,0x50);
	
	/* Read RTC time & Displaying */
	while(1)
	{
		 lcd_cmd(0x80);

		 temp=i2c_device_read(0xD0,0x2);// Read the Hour
		 lcd_data(temp/16+48);
		 lcd_data(temp%16+48);
		 lcd_data(':');
		
		 temp=i2c_device_read(0xD0,0x1);//Read the Minute
		 lcd_data(temp/16+48);
		 lcd_data(temp%16+48);
		 lcd_data(':');
		
		 temp=i2c_device_read(0xD0,0x0);// Read the second
		 lcd_data(temp/16+48);
		 lcd_data(temp%16+48);
	}
}