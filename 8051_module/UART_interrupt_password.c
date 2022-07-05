#include<reg51.h>
void delay_ms(unsigned int ms)
{
 unsigned  char i;
 for(  ;ms>0;ms--) 
 {
   for(i=250;i>0;i--);
   for(i=247;i>0;i--);
 }
}
void uart_tx(char ch)
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
void uart_string(char *s)
{
  while(*s++) 
  uart_tx(*s);
}
void uart_init()
{
	 TMOD=0x20;
	 SCON=0x50;
	 TH1=253;
	 TR1=1;
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

void main()
{
  unsigned char s1[5]="1008",s2[5]={0};
  unsigned char i=0,j=0,c=0,m=0;

   uart_init();
   while(1)
   {
     i=j=0;
	 s1[5]=0;
     uart_string("\r\n Enter Password :");
  
     for(i=0;i<4;i++)
	 {
	     s2[i]=uart_rx();
		 
	     if(s2[i]=='c')
		  {
			uart_tx('\b');
	        uart_tx(' ');
		    i--;
		  }
		  else if(s2[i]=='\r')
		  {
		    s2[i]='\0';
	        goto L1;
		  }
		  else
		  {
		    uart_tx(s2[i]);
		    delay_ms(100);
	   	    uart_tx('\b');
			uart_tx('*');
		  }
     }
	  
	
	 s2[i]='\0';
	 m=uart_rx();
	 L1:
     j=my_strcmp(s1,s2);
    
	 if(j==0 || m=='\r')
	 {
	   uart_string("\r\n Correct Password");
	   uart_string("\r\n Access Granted!");
	 } 
	 else
	 {
	   uart_string("\r\n Wrong Password");
	 }
	}
}