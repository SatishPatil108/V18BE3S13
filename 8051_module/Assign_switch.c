#include<reg51.h>
#include"delay.h"
sfr LED=0x90;
sbit sw=P2^7;
unsigned char k=0,d=0;
void main()
{
  LED=0x0F;//RESET LED 
  k=0x0F;
  while(1)
	{
	    d=0;
		while(sw==0)
		  {
			 LED=k^(1<<d);
             delay_ms(1000);
			 d++;
			 if(d>8)
			 d=0;
		 }
		 LED=0x0F;	   //RESET LED
	}
}