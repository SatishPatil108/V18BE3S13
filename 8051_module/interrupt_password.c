#include<reg51.h>
int k=0;
unsigned char s1[]="1008",s2[6];
void delay_ms(unsigned int ms)
{
	unsigned char i;
	for(  ;ms>0;ms--)
	{
		for(i=250;i>0;i--);
		for(i=247;i>0;i--);
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
void uart_tx(unsigned char ch)
{
	SBUF=ch;
	while(TI==0);
	TI=0;
}
	
/*unsigned char uart_rx()
{
	while(RI==0);
	RI=0;
	return SBUF;
}
*/
void uart_string(char *str)
{
	while(*str)
    uart_tx(*str++);
}
void UART_Handler(void) interrupt 4
{
	if(RI==1)
	{
		RI=0;
		s2[k++]=SBUF;
	}
}
void my_strcmp(const char*p,const char*q)
{
			unsigned char i;
			for(i=0;p[i];i++)
			{
				if(p[i]!=q[i])
				break;
			}
			
			if(p[i]=='\0')
			uart_string("\r\n Equal");
			else
	   	    uart_string("\r\n Not Equal");
			
}

void main()
{
	uart_init();
  uart_string("\r\n Enter Password :");
  while(1)
  {
    if(s2[k]=='\r')
     {	
	    s2[k+1]='\0';
	 
				if(s2[k-1]=='\r')
				{
					k=0;
					my_strcmp(s1,s2);
					s2[6]=0;
					uart_string("\r\n Enter Password :");
				}
		}
  }
}
	