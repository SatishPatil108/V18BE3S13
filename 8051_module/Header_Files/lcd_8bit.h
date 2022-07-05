sfr LCD=0x80;
sbit RS=P3^4;
sbit RW=P3^5;
sbit EN=P3^6;
void lcd_data(unsigned char _data)
{
	LCD=_data;
	RS=1;
	RW=0;
	EN=1;
	delay(2);
	EN=0;
}
void lcd_int(signed int n)
{
unsigned char rem[5];
signed char l=0;

		if(n<0)
		{
			lcd_data('-');
			n=-n;
		}
		if(n==0)
		{
			lcd_data('0');
		}
							
		while(n>0)//make reverse of num
		{
			rem[l++]=(n%10)+48;//ascii
			n=n/10;
		}
		rem[l--]='\0';
		
		while(l>=0)
		{
			lcd_data(rem[l--]);
		}
		
}
void lcd_float(float f)
{
		short int f1;
	    float f2;
		
		f1=(int)f;
		lcd_int(f1);
		f2=(f-f1)*100;
		lcd_data('.');
		lcd_int(f2);

}

void lcd_cmd(unsigned char cmd)
{
	LCD=cmd;
	RS=0;
	RW=0;
	EN=1;
	delay(2);
	EN=0;
}
void lcdString(unsigned char *p)
{
		while(*p)
		lcd_data(*p++);
}

void lcdInit(void)
{
	lcd_cmd(0x02);
	lcd_cmd(0x38);
	lcd_cmd(0x06);
	lcd_cmd(0x0E);
	lcd_cmd(0x01);
}