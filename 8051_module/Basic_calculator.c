#include<reg51.h>
#include"LCD8bit.h"
#include"keypad.h"
#include"calculator.h"
main()
{
	unsigned int temp1=0,temp2=0,j=0,k=0;
 	int a[4]={0,0,0,0},b[4]={0,0,0,0};
  char n=0;
	lcd_init();
	lcd_cmd(0xC);
	while(1)
	{
	temp1=temp2=n=j=k=0;	
	a[0]=a[1]=a[2]=a[3]=0;
	b[0]=b[1]=b[2]=b[3]=0;	
	
	lcd_string("Enter Data");
  lcd_cmd(0xC0);
	lcd_string("Eg.10+11=");
  delay_ms(550);
	lcd_cmd(0x1);
	
	lcd_string("Enter Here");
	delay_ms(1000);
	lcd_cmd(0x1);
	for(j=0;j<3;j++)
	{
		a[j]=keyscan();
		delay_ms(100);
		if(a[j]=='C')
		{
			lcd_cmd(0x10);
			j--;
			lcd_data(' ');
			lcd_cmd(0x10);
			j--;
		}
    else if(a[j]=='+' || a[j]=='-' || a[j]=='*' || a[j]=='/')
		{
			n=a[j];
		  lcd_data(a[j]);
			goto L1;
		}
		else
		{
			lcd_data(a[j]);
			delay_ms(500);
			lcd_cmd(0x1);
		  temp1=temp1*10+a[j]-48;
			delay_ms(500);
			lcd_cmd(0x1);
			lcd_int(temp1);
		}
	}
	L1:
	for(k=0;k<3;k++)
	{
		b[k]=keyscan();
		delay_ms(100);
		if(b[k]=='C')
		{
			lcd_cmd(0x10);
			k--;
			lcd_data(' ');
			lcd_cmd(0x10);
			k--;
		}
		else if(b[k]=='=')
		{
			lcd_data(b[k]);
			goto L2;
		}
	  else
		{
			lcd_data(b[k]);
		  temp2=temp2*10+b[k]-48;
			lcd_cmd(0x10);
			lcd_int(temp2);
			lcd_cmd(0x10);
    }
	}
	L2:
	lcd_calresult(temp1,temp2,n);
 }
} 
