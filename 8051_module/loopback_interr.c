#include<reg51.h>
unsigned char temp;
void UART_handler(void) interrupt 4
{
  if(RI==1)
  {
    RI=0;
	temp=SBUF;
	SBUF=temp; // Loop_Back
  }
 if(TI==1)
  {
     TI=0;// imp
  }
}
void uart_init(void)
{
  SCON=0x50;
  TMOD=0x20;
  TH1=253;
  TR1=1;
  EA=ES=1;
}

    
void main()
{  unsigned char temp=0;
   uart_init();
   while(1)
   {
      //if(temp=='\r')
      //uart_tx('A');
	  
   }
}