#include<reg51.h>
#include"delay.h"
sbit LED=P2^0;
void main()
{
	LED=~LED;
	//delay_ms(1000);
	//LED=1;
	delay_ms(1000);
}