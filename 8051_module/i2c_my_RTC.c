#include<reg51.h>
#include"delay.h"
#include"UART.h"
#include"LCD8bit.h"
#include"i2c.h"
#include"i2c_device.h"
#include"MY_RTC_SET.h"
#include"MY_RTC_READ.h"
void main()
{
  uart_init(9600);
  lcd_init();
  my_RTC_setdata();
  my_RTC_readdata();
}




