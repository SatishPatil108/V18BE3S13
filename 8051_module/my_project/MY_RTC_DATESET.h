void my_RTC_DATEset()
{	unsigned int temp=0;
	unsigned char ch=0,temp1=0;
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
}