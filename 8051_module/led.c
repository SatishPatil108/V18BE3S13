#include<reg51.h>
#include"delay.h"
sbit LED=P2^0;
void main()
{
	while(1)
	{
		LED=0;
		delay_ms(100);
		LED=1;
		delay_ms(100);
	}
}