// ADC pin Connection
sbit CLK=P1^0;
sbit dout=P1^1;
sbit din=P1^2;
sbit cs=P1^3;

unsigned int read_adc(bit d1,bit d0)
{
	unsigned int temp=0x0;
	signed char i;
	
	/* Selecting chip */
	cs=0;// chip selected
	CLK=0; din=1; CLK=1; // start bit (val is 1)
	CLK=0; din=1; CLK=1;// single ended mode selected
	CLK=0; din=1; CLK=1;
	
	/* Selecting ADC channel */
  CLK=0; din=d1; CLK=1;// D1=0;
	CLK=0; din=d0; CLK=1;// D0=0+start_sampling
	
	CLK=0; din=1; CLK=1;// Stop sampling
	CLK=0; din=1; CLK=1;// NULL bit
	
	for(i=11;i>=0;i--)
	{
		CLK=0;
		
		if(dout==1)
	  temp |=1<<i;	
		
    CLK=1;
	}
	cs=1;// chip disabled
	return temp;
}
