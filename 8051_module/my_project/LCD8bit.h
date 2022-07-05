sbit RS =P3^4;
sbit RW =P3^5;
sbit EN =P3^6;

sfr LCD=0x80;
code void lcd_cmd(unsigned char cmd)
{
LCD=cmd;
RS=0;
RW=0;
EN=1;
	delay_ms(2);
EN=0;
}

void lcd_data(unsigned char dat)
{
LCD=dat;
RS=1;
RW=0;
EN=1;
	delay_ms(2);
EN=0;
}
void lcd_init(void)
{
lcd_cmd(0x2);
lcd_cmd(0x38);
lcd_cmd(0xE);
lcd_cmd(0x6);
lcd_cmd(0x1);
}
 
 void lcd_string(char *s)
 {
  while(*s)
  lcd_data(*s++);
 }


void lcd_int(int num)
{
	 char k=0,s[16];
		if(num==0)
		{
			//lcd_cmd(0x81);
			lcd_data('0');
		}
		else if(num<0)
		{
			lcd_data('-');
			num=-num;
			goto L1;
		}	
	L1:
 		    while(num>0)	
    		 {
				 s[k++]=(num%10+48);
			 	num=num/10;
		 	 }
		 	k--;
		 	for(  ;k>=0;k--)
		 	{
				 lcd_data(s[k]);
			 	delay_ms(100);
		 	}
	  	
 }


void lcd_float(float f)
{
   char i=0;
	 if(f==0)
	 {
		 //lcd_cmd(0xC1);
		 lcd_data('0');
	 }
		 
   else if(f<0) 		 
	 {
		 lcd_data('-');
		 f=-f;
		 goto L2;
	 }
	 
L2:	 
	 i=f;
	 lcd_int(i);
	 lcd_data('.');
	 
	 i=(f-i)*100;
	 lcd_int(i);
}
