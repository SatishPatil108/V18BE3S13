#include<reg51.h>
#include"delay.h"
sbit LED1=P2^0;
sbit LED2=P2^1;
sbit LED3=P2^2;
sbit LED4=P2^3;
void main()
{
	LED1=LED2=LED3=LED4=0;
	delay_ms(1000);
	LED1=LED2=LED3=LED4=1;
  delay_ms(1000);
}                                                                                                                                                                                         