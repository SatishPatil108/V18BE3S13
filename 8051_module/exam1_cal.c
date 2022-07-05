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
void uart_int(int num)
{
	int s[10],j,r;
	if(num==0)
	{
    uart_tx('0');
	}
	else if(num<0)
	{
		uart_tx('-');
		num=-num;
		goto L1;
	}
	L1:
	while(num>0)
	{
		r=num%10;
		s[j++]=r+48;
		num=num/10;
	}
	j--;
	for(  ;j>=0;j--)
	uart_tx(s[j]);
}
	
		  
		

void main()
{
  unsigned int temp1,temp2,temp3,ch,ch1,op,op1,res,res1;	
	uart_init();
	
	while(1)
	{
		temp1=temp2=temp3=ch=op=op1=res=res1=0;
		uart_string("\r\n Enter Data :");
		while(1)
		{
		 ch=uart_rx();
    	
     if(ch!='+' && ch!='-' && ch!='*' && ch!='/' || ch=='\r')			
		 {
			 if(ch=='\r')
		  	break;
       temp1=temp1*10+ch-48;
     }
     else
		 {
      op=ch;
			break;
     }			 
	  }		 
		while(1)
		{
		 ch=uart_rx();
    	
     if(ch!='+' && ch!='-' && ch!='*' && ch!='/' || ch=='\r')			
		 {
			 if(ch=='\r')
		  	break;
       temp2=temp2*10+ch-48;
     }
     else
		 {
      op1=ch;
			break;
		 }			 
	  }		 
		 
		while(1)
		{
		 ch=uart_rx();	
		 if(ch!='+' && ch!='-' && ch!='*' && ch!='/' || ch=='\r')			
		  {
			   if(ch=='\r')
		  	 break;
         temp3=temp3*10+ch-48;
      }
		}
   
		uart_string("\r\n Result :"); 
		switch(op)
		{
			case '+':res=(temp1+temp2);
			         //uart_int(res);
			         break;
		  case '-':res=(temp1-temp2);
			         //uart_int(res);
			         break;
			case '*':res=(temp1*temp2);
			         //uart_int(res);
			         break;
			case '/':res=(temp1/temp2);
			         //uart_int(res);
			         break;
		}
		switch(op1)
		{
			case '+':res1=(res + temp3);
			         uart_int(res1);
			         break;
		  case '-':res1=(res - temp3);
			         uart_int(res1);
			         break;
			case '*':res1=(res * temp3);
			         uart_int(res1);
			         break;
			case '/':res1=(res / temp3);
			         uart_int(res1);
			         break;
		}
		
	}
}