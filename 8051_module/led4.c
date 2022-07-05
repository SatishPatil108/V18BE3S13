#include<reg51.h>
#include"delay.h"
void main()
{
	while(1)
	{
		P2^=0X1;
		delay_ms(100);
		P2^=0X3;
		delay_ms(100);
		P2^=0X6;
		delay_ms(100);
		P2^=0XC;
		delay_ms(100);
	}
}
		