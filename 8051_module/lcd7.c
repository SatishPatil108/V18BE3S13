#include<reg51.h>
#include"LCD8bit.h"
main()
{
  lcd_init();
  lcd_cmd(0x85);
  lcd_string("PATIL");

  lcd_cmd(0xC5);
	
  lcd_string("SATISH")	;
  while(1);
}		