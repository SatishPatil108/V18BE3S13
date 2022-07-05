void my_RTC_readdata()
{
     unsigned int temp=0;
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
		
		lcd_string("20");
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
		
				