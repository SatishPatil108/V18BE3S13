#include<reg51.h>
#include"UART.h"
main()
{
		unsigned char temp;
		uart_init(9600);
		while(1)
		{
		    uart_string("\r\n Enter char: ");
	    	temp=uart_rx();
			uart_tx(temp);

			uart_string("\r\n ASCII Val:");
			uart_tx(temp/100+48);
			uart_tx((temp/10)%10+48);
			uart_tx(temp%10+48);
		}
}