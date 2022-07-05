#include<reg51.h>
sbit sw=P1^0;
sbit LED=P2^7;

void main()
{
	while(1)
	{
		 LED=1;
		 while(sw==1);
		 LED=0; 
		 while(sw==0);
	}
}
		 
		