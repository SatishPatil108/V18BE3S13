#include<reg51.h>
#include"delay.h"
#include"UART.h"
main()
{
   unsigned int temp1=0,temp2=0,ch=0,op=0,res=0,clear=0;
   uart_init(9600);
   L1:
   uart_string("\r\n Enter Data :");
 
    while(1)
 	{	
	    ch=uart_rx();
 		if(ch!='+' && ch!='-' && ch!='*' && ch!='/')
		{
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
		
	}
	
   uart_string("\r\n Result is :");

		switch(op)
		{
		  case '+': res=(temp1+temp2);
		  			uart_int(res);	
	                break;
		
		  case '-': res=(temp1-temp2);
		  			uart_int(res);	
	                break;

		  case '*': res=(temp1*temp2);
		  			uart_int(res);
	                 break;

          case '/':  res=(temp1/temp2);
		  			 uart_int(res);
	                 break;
    	}
	clear=uart_rx();
	if(clear=='c')
	{
	temp1=0,temp2=0,ch=0,op=0,res=0;		 
    goto L1;
	}
}					   