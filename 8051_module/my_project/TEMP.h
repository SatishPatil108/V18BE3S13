/* Temp header */
void DS1621_init(void)
{
	i2c_start();// start the i2c device
	i2c_write(0x90);// (SA+w);
	i2c_ack();
	
	i2c_write(0xAC);// Access config command
	i2c_ack();
	i2c_write(0x02);//Continous conversion
	i2c_ack();
	
	/******Setting TH value ********/
	
	i2c_start();//Restart again
	i2c_write(0x90|0);
	i2c_ack();
	i2c_write(0xA1);// Access TH command
	i2c_ack();
	i2c_write(0x25);//1st Byte of Data TH limit
	i2c_ack();
	i2c_write(0x00);// 2nd Byte of Data TH limit
	i2c_ack();
	
	/*******Setting TL value **********/
	
	i2c_start();// Restart again
	i2c_write(0x90|0);
	i2c_ack();
	i2c_write(0xA2);// Access TL command
	i2c_ack();
	i2c_write(0x0A);// 1st Byte of Data TL limit
	i2c_ack();
	i2c_write(0x00);// 2nd Byte of Data TL limit
	i2c_ack();
	
	/***********Start Conversion *************/
	i2c_start();// Restart again
	i2c_write(0x90|0);
	i2c_ack();
	i2c_write(0xEE);//Start conversion
	i2c_ack();
	i2c_stop();
}