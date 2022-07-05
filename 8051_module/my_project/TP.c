#include<reg51.h>
#include"delay.h"
#include"UART.h"
#include"LCD8bit.h"

main()
{
   uart_init(9600);
   lcd_init();
   lcd_cmd(0x80);
   lcd_string("Satish");
   uart_string("Hello");
}