#include<reg51.h>
#include"delay.h"
void main()
{
	while(1)
	{
		P2^=0x0C;
		delay_ms(1000);
		P2^=0x03;
		delay_ms(1000);
	}
}
		