unsigned char t1,t2,t3,t4,t5,t6,t7,t8,d=0x0,j;
unsigned int c=0;
void EEPROM_Write_data()
{
   d=0x0;j=0;
   i2c_device_write(0XA0,d++,t1);// Write the HOUR
	 i2c_device_write(0XA0,d++,t2); 
	 
	 i2c_device_write(0XA0,d++,t3); //Write the Minutes
	 i2c_device_write(0XA0,d++,t4); 
	
	 i2c_device_write(0XA0,d++,t5); //Write the Seconds
	 i2c_device_write(0XA0,d++,t6); 
	 i2c_device_write(0XA0,d++,t7); //Write the AM/PM
	 i2c_device_write(0XA0,d++,t8); 
   
	 while(j<5) 										   
	 {
	   i2c_device_write(0xA0,d++,buf[j++]);//write the temperature
	 }
	 j=0;
	 
	 while(j<5)
	 {
	 
	   i2c_device_write(0xA0,d++,buf1[j++]);// write the Light intensity
   }
	
}


void EEPROM_Read_data()
{
    j=0;
	d=0x0;c++;
	uart_string("\r\n  ");
	if(c!=10)
	{
		uart_tx(c+48); 
	}
	else
	{
		c=0;
	}
    
	uart_tx('\t');
	uart_tx(i2c_device_read(0xA0,d++));//Read the Hours
	uart_tx(i2c_device_read(0xA0,d++)); //Read the Hours
	
	uart_tx(':');
	
	uart_tx(i2c_device_read(0xA0,d++)); //Read the Minutes
	uart_tx(i2c_device_read(0xA0,d++)); //Read the Minutes
	
	uart_tx(':');
	
	uart_tx(i2c_device_read(0xA0,d++));//Read the Seconds
	uart_tx(i2c_device_read(0xA0,d++));//Read the Seconds
	uart_tx(i2c_device_read(0XA0,d++)); //READ the AM/PM
	uart_tx(i2c_device_read(0XA0,d++)); //
	uart_string("  ");
	 
	
	 while(j<5) 										   
	 {
	  j++; 
	  uart_tx(i2c_device_read(0xA0,d++));//Read the temperature
	 }
	 uart_tx('C');
	 j=0;
	
	 uart_string("     ");

	 while(j<5)
	 {
	   j++;
	   uart_tx(i2c_device_read(0xA0,d++));// Read the Light intensity
   	 }
		 uart_tx('%');
	uart_string("\r\n");
}
	
   