#include<reg51.h>
#include"delay.h"
sfr LED=0xA0;
sbit d=P0^0;
void main()
{
  unsigned buf[]={0xC0,0xF9,0x24,0x30,0x19,0x12,0x02,0xF8,0x00,0x10};
  unsigned char i=0;
  d=0;

  for(i=0;i<10;i++)
  {
     LED=buf[i];
	 delay_ms(1000);
  }
}