void i2c_device_write(unsigned char sa,unsigned char mr,unsigned dat)
{
  i2c_start();//start the i2c 
  i2c_write(sa);// write the 7 bit slave address
  i2c_ack();   // check  the Ack
  i2c_write(mr); // write the 8 bit memory address
  i2c_ack();	 // chech The Ack
  i2c_write(dat);  // write the 8 bit data
  i2c_ack();	  // check The ACK
  i2c_stop();	  // stop the i2c
  delay_ms(10);
}

unsigned char i2c_device_read(unsigned char sa,unsigned char mr) 
{
  unsigned char temp;
  i2c_start();// start the i2C device
  i2c_write(sa);// write 7 bit slave address
  i2c_ack();	// To check ACK
  i2c_write(mr); // write 8 bit memory address
  i2c_ack();  // To check ACK
  i2c_start(); // Restart condition
  i2c_write(sa|1); // write slave address with read option
  i2c_ack(); // To check ACK
  temp=i2c_read();// read 8bit data from slave
  i2c_noack();	// NO Ack
  i2c_stop(); // stop the i2c device
  return temp;
}
