#include<reg51.h>
#include"UART.h"
main()
{
   uart_init(9600);

   //uart_string("jon\n snow\n");
   uart_string("VECTOR\r\nINSTITUTE\r\n");
   while(1);
}

   