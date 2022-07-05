sbit SDA=P2^0;
sbit SCL=P2^1;
void i2c_start(void)
{
	SCL=1;
	SDA=1;
	SDA=0;
}
void i2c_stop(void)
{
	SCL=0;
	SDA=0;
	SCL=1;
	SDA=1;
}
void i2c_write(unsigned char d)
{
signed char k;
	for(k=7;k>=0;k--)
	{
		SCL=0;
		SDA=(d & (1<<k))?1:0;
		SCL=1;
	}
}

unsigned char i2c_read(void)
{
	unsigned char temp=0;
	signed char k;
	
	for(k=7;k>=0;k--)
		{
			SCL=1;
			if(SDA==1)
			temp|=(1<<k);
			SCL=0;
		}
	return temp;
}

void i2c_ack(void)
{
	SCL=0;
	SDA=1;
	SCL=1;
	while(SDA==1);
	SCL=0;
}
void i2c_nack(void)
{
	SCL=0;
	SDA=1;
	SCL=1;
}