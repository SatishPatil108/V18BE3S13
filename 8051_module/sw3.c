#include<reg51.h>
#include"delay.h"
sbit LED=P2^7;
sbit sw =P1^0;

void main()
{
	while(1)
	{
		while(sw==0)
		{
			LED=~LED;
			delay_ms(1000);
		}
     LED=1;
	}		
}