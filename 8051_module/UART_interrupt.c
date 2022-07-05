#include<reg51.h>
#include"LCD8bit.h"
sbit rxLED=P2^0;

unsigned char buf[13],i;
void UART_Handler(void) interrupt 4
{
  if(RI==1)
  {
    RI=0;// imp
	 buf[i]=SBUF;
	 i++;
	 rxLED=~rxLED;
   }

   if(TI==1)
   {
     TI=0;//imp
   }
}

void uart_init()
{
  TMOD=0x20;
  SCON=0x50;
  TH1=253;
  TR1=1;
  EA=ES=1;// UART interrupt is enabled
 }
void main()
{
  uart_init();
  lcd_init();

  while(1)
  {
     if(i==12)
	 {
	   buf[i]=0;
	   i=0;
	   lcd_string(buf);
	 }
  }
}

   




