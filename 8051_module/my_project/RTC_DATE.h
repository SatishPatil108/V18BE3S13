
void my_RTC_setdate(void)
{
	unsigned char temp,ch;
	unsigned int temp1; 
	uart_string("\r\nSet the DATE - DAY:DD:MM:YY-:");
	L1:
	uart_string("\r\nSET_Day  :");
	while(1)
     {
       ch=uart_rx();
	     if(ch=='\r')
  	   break;
	     temp=(temp*10+(ch-48));
     }
  
  temp1=(temp%10+(temp/10)*16);
	if(temp1>7)	 
	{
    uart_string("\r\nWrong Choice Please Select Correct Choice:");		
		temp=temp1=0;
		goto L1;
	}
  i2c_device_write(0xD0,0x3,temp1);
  temp=temp1=0;
  
	uart_string("\r\nSET_DATE :");
  while(1)
  {
      ch=uart_rx();
	    if(ch=='\r')
	    break;
  	  temp=temp*10+ch-48;
  }
  temp1=(temp%10+(temp/10)*16);
  i2c_device_write(0xD0,0x4,temp1);
  temp=temp1=0;
  uart_string("\r\nSET_MONTH:");
	while(1)
    {
      ch=uart_rx();
	    if(ch=='\r')
	    break;
	  temp=temp*10+ch-48;
    }
  temp1=(temp%10+(temp/10)*16);
  i2c_device_write(0xD0,0x5,temp1);
  temp=temp1=0;
  uart_string("\r\nSET_YEAR :");
	while(1)
    {
      ch=uart_rx();
	    if(ch=='\r')
  	  break;
  	  temp=(temp*10+(ch-48));
    }
 
  temp1=(temp%10+(temp/10)*16);
  i2c_device_write(0xD0,0x6,temp1);
  temp=temp1=0;
}

void my_RTC_readdate()
{	
	  unsigned char temp=0;
	  temp=i2c_device_read(0xD0,0x4);//Read the DATE
	  uart_tx(temp/16+48);
  	uart_tx(temp%16+48);
  	uart_tx('/');
		
	  temp=0;
	  temp=i2c_device_read(0xD0,0x5);//Read the month
	  uart_tx(temp/16+48);
  	uart_tx(temp%16+48);
  	uart_tx('/');
	
  	uart_string("20");
	  temp=0;
	  temp=i2c_device_read(0xD0,0x6);//Read The YEAR
	  uart_tx(temp/16+48);
  	uart_tx(temp%16+48);	
	  
		uart_tx('-');
    temp=i2c_device_read(0XD0,0x3);// Read the DAY
	  switch(temp)
	  {
	       case 1:uart_string("SUNDAY");
		     break;
			
				 case 2:uart_string("MONDAY");
		     break;
			
				 case 3:uart_string("TUESDAY");
		     break;
			  
				 case 4:uart_string("WENESDAY");
				 break;
	  
				 case 5:uart_string("THURSDAY");
				 break;
			 
			   case 6:uart_string("FRIDAY");
				 break;
			
				 case 7:uart_string("SATURDAY");
         break;
	} 
}
	