#include<reg51.h>
#include"LCD8bit.h"
void main()
{
 lcd_init();
 lcd_data('A');
 while(1);
}