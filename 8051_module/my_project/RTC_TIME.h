unsigned char t1,t2,t3,t4,t5,t6;
void my_RTC_settime(void)
{
  unsigned char temp,ch;
  unsigned int temp1;
  uart_string("\r\nSet the TIME -: HH:MM:SS Format -:\r\n");
	uart_string("\r\nSET_Hour:");
  while(1)
  {
    ch=uart_rx();
	  if(ch=='\r')
	  break;
	  temp=(temp*10+(ch-48));
  }
  uart_string("\r\nSET_Minu:");
  temp1=((temp%10)+(temp/10)*16);
  i2c_device_write(0xD0,0x2,temp1);
  temp=temp1=0;
  
  while(1)
  {
      ch=uart_rx();
	    if(ch=='\r')
	    break;
	    temp=((temp*10)+(ch-48));
  }
  uart_string("\r\nSET_Sec :");
  
  temp1=((temp%10)+(temp/10)*16);
  i2c_device_write(0xD0,0x1,temp1);
  temp=temp1=0;
  
	while(1)
  {
     ch=uart_rx();
	   if(ch=='\r')
	   break;
	   temp=(temp*10+(ch-48));
  }
  temp1=((temp%10)+(temp/10)*16);
  i2c_device_write(0xD0,0x0,temp1);
  temp=temp1=0;
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
	   }
	  else
	   {
	     lcd_cmd(0x80+8);
	     lcd_string("AM");
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