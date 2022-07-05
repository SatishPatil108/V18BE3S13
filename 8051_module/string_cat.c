#include<reg51.h>
#include"UART.h"
void main()
{
  unsigned char s1[6]={0},s2[6]={0};
  unsigned int i=0,j=0,clear=0;
  uart_init(9600);
  while(1)
  {
       uart_string("\r\n Enter String1:");
       for(i=0;i<6;i++)
       {
          s1[i]=uart_rx();
	      if(s1[i]=='\r')
	      break;
       }
        s1[i]='\0';
        uart_string("\r\n Enter String2:");
       for(j=0;i<6;j++)
       {
         s2[j]=uart_rx();
	     if(s2[j]=='\r')
	     break;
       }
        s2[j]='\0';

		uart_string("\r\n After :\r\n ");
		uart_string(s1);
		uart_string("\r\n ");
		uart_string(s2);
  
      uart_stringcat(s1,s2); 
   	 }
}