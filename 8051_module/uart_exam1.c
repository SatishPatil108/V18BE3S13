#include<reg51.h>
void delay_ms(unsigned int ms)
{
	unsigned char i;
	for(  ;ms>0;ms--)
	{
		for(i=250;i>0;i--);
		for(i=247;i>0;i--);
	}
}
int my_strcmp(const char*p,const char*q)
{
	unsigned char i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
		break;
	}
	if(p[i]==q[i])
		return 0;
	else
		return 1;
}
void uart_init(void)
{
	SCON=0x50;
	TMOD=0x20;
	TH1=253;
	TR1=1;
}
void uart_tx(unsigned char ch)
{
	SBUF=ch;
	while(TI==0);
	TI=0;
}
	
unsigned char uart_rx()
{
	while(RI==0);
	RI=0;
	return SBUF;
}
void uart_string(char *str)
{
	while(*str)
		uart_tx(*str++);
}

void main()
{
	unsigned char s1[6],s2[6],i,j,ch;
	unsigned int k;
	uart_init();
  while(1)
	{
	 uart_string("\r\n Enter String1 :\r\n");
	 for(i=0;i<5;i++)
	 {
		s1[i]=uart_rx();
		if(s1[i]=='\r') 
		break;	
	 }
	 s1[i]='\0';
	
  	uart_string("\r\n Enter String2 :\r\n");
	  for(j=0;j<5;j++)
	  {
		 s2[j]=uart_rx();
		 if(s2[j]=='\r') 
		 break;		
	  }
	  s2[j]='\0';
		
		ch=uart_rx();
		{
		if(ch=='\r')
	  k=my_strcmp(s1,s2);
	  }
	  
		if(k==0)
		{
		  uart_string("\r\n Equal");
		}
	  else
		{	
      uart_string("\r\n Not Equal");
		}
	}
 }
	 
	