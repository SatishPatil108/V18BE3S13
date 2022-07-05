unsigned char t1,t2,t3,t4,t5,t6,t7,t8;
void RTC_TIME()
{
  /*************setting  RTC time 11:58:45*******************/
  i2c_device_write(0xD0,0x2,0x11);
  i2c_device_write(0xD0,0x1,0x58);
  i2c_device_write(0xD0,0x0,0x45);
}


void my_RTC_readtime()
{
    unsigned char temp=0;
	/*************** Read RTC time & Displaying ************************/
  	lcd_cmd(0x80);
	temp=i2c_device_read(0xD0,0x2);// Read the Hours
  	lcd_data(temp/16+48);
    lcd_data(temp%16+48);
	  
	t1=(temp/16+48);
    t2=(temp%16+48);
	  
    lcd_data(':');
	  if(temp>=18)
	   {
	    lcd_cmd(0x80+8);
	    lcd_string("PM");
			t7='P';
      t8='M';			 
	   }
	  else
	   {
	     lcd_cmd(0x80+8);
	     lcd_string("AM");
			 t7='A';
			 t8='M';
	   }
        temp=0;
        lcd_cmd(0x83);
	    temp=i2c_device_read(0xD0,0x1);//Read the Minutes
        lcd_data(temp/16+48);
        lcd_data(temp%16+48);
		t3=(temp/16+48);
        t4=(temp%16+48);
	   
		lcd_data(':');
        temp=0;

	  temp=i2c_device_read(0xD0,0x0);// Read the seconds
	  lcd_data(temp/16+48);
	  lcd_data(temp%16+48);
	  t5=(temp/16+48);
      t6=(temp%16+48);
}  
 
