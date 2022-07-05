#include<reg51.h>
#include"delay.h"
#include"UART.h"
sbit sw=P2^7;
main()
{
	unsigned char buf[5],count=0;
	uart_init(9600);
	while(1)
	{
	  count=0;
	  do
	  {
	    if(sw==0)
		{
		delay_ms(50);
		count++;
		while(sw==0);
		buf[0]=count/10+48;
		buf[1]=count%10+48;
		buf[2]='\r';
		buf[3]='\n';
		buf[4]='\0';
		uart_string(buf);
	   }
	 }while(count<59);
	}
}
