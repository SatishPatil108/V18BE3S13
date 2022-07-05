#include<reg51.h>
unsigned long int count1,count2;

void Timer0_Handler(void) interrupt 1
{
	TR0=0;	// stop timer0 
	count2++; // Def task of timer0 ISR
	/* init timer 0 to 50ms */

	TH0=0x3C;
	TL0=0xAF;

	TR0=1;// start timer0
}
void main()
{
  	 TMOD=0x01;
	 TH0=0x3C;
	 TL0=0xAF;

	 EA=ET0=1;//timer0 interrupt enabled
  	 TR0=1;

	   while(1)
	   count1++;
}
  
  
  
  
 