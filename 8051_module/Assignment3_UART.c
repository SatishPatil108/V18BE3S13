#include<reg51.h>
#include"delay.h"
#include"UART.h"
main()
{
	unsigned char s1[5],s2[]="1008";
	unsigned char temp=0,j=0,k=0,i=0,m=0,g='\b';
	uart_init(9600);
	while(1)
	{
		uart_string("\r\n Enter Password:");
		for(j=0;j<4;j++)
			{
	 		   s1[j]=uart_rx(); 
			   
				 if(s1[j]=='g')
				 {
					 uart_tx(g);
					 j--;
					 uart_tx(' ');
					 uart_tx(g);
					 j--;	 
				 }
			     
				 else if(s1[j]=='\r')
			   goto L2;
			   
			   else
			   	  {
						 uart_tx(s1[j]);
						 delay_ms(100);
						 uart_tx('\b');
			             uart_tx('*');
				    }
	     	}
		
			L2:
			m=uart_rx();
			s1[j]='\0';
			i=my_strcmp(s1,s2);
		
			if(i==0 && m=='\r')
			{	
			  k=0;
				uart_string("\r\n Correct Password");
				uart_string("\r\n Access Granted.!");
			}
			 else
			 {	
			     	k++;
					  uart_string("\r\n Wrong Password");
				    if(k==3)
				    goto L1;
		   }
	 }
	
     L1:
	   uart_string("\r\n Failed..!");
	   while(1);
}


	














	   


