#include<reg51.h>
sbit LED=P2^0;

unsigned long int count=0;
void INT0_Handler(void) interrupt 0
{
	LED=~LED;// default task of isr
}
void main()
{
 		EA=EX0=1;//INT0 Enabled  OR
		// IE=0x81;//INT0 Enabled 

	   	 //IT0=1;// INT0 is edge triggered
		 IT0=0;// INT0 is level triggered
		 while(1)
		 count++;
}