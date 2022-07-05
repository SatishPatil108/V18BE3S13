#include<reg51.h>
#include"delay.h"
#include"LCD8bit.h"

void main()
{
lcd_init();
lcd_data();
while(1);
}