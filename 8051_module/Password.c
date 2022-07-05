#include<reg51.h>
#include"LCD8bit.h"
#include"keypad.h"
#include"passwordcheck.h"
main()
{
	unsigned char s1[5],s2[]="1234";
	unsigned char i=0,j=0,k=0,c=0,m=0;
	lcd_init();
	lcd_cmd(0xC);
	while(1)
	{
		i=0,j=0;
		lcd_cmd(0x80);
		lcd_cmd(0xC);
		lcd_string("Enter Password");
		lcd_cmd(0xC0);
			for(j=0;j<4;j++)
			{
				s1[j]=keyscan();
				if(s1[j]=='C')		
                { 			 					
				lcd_cmd(0x10);	
				lcd_data(' ');
				j--;
				lcd_cmd(0x10);
                 j--; 					
				}		
        else if(s1[j]=='=')				
				goto L2;
       
        else
				{					
				lcd_data(s1[j]);
				delay_ms(500);
				lcd_cmd(0x10);
				lcd_data('*');
				}
			}
			
			L2:
			s1[j]='\0';
			i=lcd_mystrcmp(s1,s2);
			lcd_cmd(0x01);
			delay_ms(100);
			lcd_string("Enter Option");
			lcd_cmd(0xC0);
			m=keyscan();
			
			if(i==0 && m=='=')
			{
				lcd_cmd(0x80);
				lcd_string("Correct Password");
				delay_ms(500);
				lcd_cmd(0x01);
				lcd_string("Access Granted.!");
				while(1);
			}
			 else
			 {
					k++;
					lcd_cmd(0x80);
					lcd_string("Wrong Password");
					delay_ms(1000);
			    if(k==3)
				  {
						lcd_cmd(0x01);
				    goto L1;
					}
			 }
	 }
	
     L1:
	   lcd_string("Failed..!");
	   while(1);
}


	