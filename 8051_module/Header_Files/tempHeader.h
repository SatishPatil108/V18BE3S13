float tmp,cpc,cnt,myCtemp,myreg,myth;
void initDs1621(void)
{
		i2c_start();
		i2c_write(0x90);          // write address with WR option
		i2c_ack();

		i2c_write(0xAC);		     // Access Config command
		i2c_ack();						
		i2c_write(0x02);
    i2c_ack();
	
	
		i2c_start();				     //  setting TH 
		i2c_write(0x90|0); 
		i2c_ack();
		i2c_write(0XA1); 
		i2c_ack();
		i2c_write(0X25); 
		i2c_ack();
		i2c_write(0X00); 
		i2c_ack();
		

		i2c_start();				    // setting TL
		i2c_write(0x90|0); 
		i2c_ack();
		i2c_write(0XA2); 
		i2c_ack();
		i2c_write(0X0A); 
		i2c_ack();
		i2c_write(0X00); 
		i2c_ack();

		i2c_start();					// Start conversion
		i2c_write(0x90|0);  
		i2c_ack();
		i2c_write(0XEE); 
		i2c_ack();
		i2c_stop();
		

}

/* this readDs1621 also will work but even our i2c_Device_read will work */ 

/*
unsigned char readDs1621(unsigned char cmd) 
{
	unsigned char c;
	i2c_start();
	i2c_write(0x90);
	i2c_ack();	
	i2c_write(cmd);
	i2c_ack();
	
	i2c_start();
	i2c_write(0x90|1);
	i2c_ack();
	c=i2c_read();
	i2c_nack();
	i2c_stop(); 
	return c;
}

*/