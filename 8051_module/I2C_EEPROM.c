#include<reg51.h>
#include"LCD8bit.h"
#include"i2c.h"
#include"i2c_device.h"
void main()
{
  unsigned char temp;
  lcd_init();
  i2c_device_write(0xA0,0x2,'A');
  temp=i2c_device_read(0xA0,0x2);
  lcd_data(temp);
  while(1);
}
 