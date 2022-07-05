void uart_init(int baud)
{
SCON=0x50;
TMOD=0x20;
	switch(baud)
	{
 			case 7200:TH1=252;
 	    			  break;
 			case 9600:TH1=253;
 		   			  break;	
 			case 28800:TH1=255;
		   				break;
 			case 57600:TH1=253;
		   				break;
	}
	TR1=1;
}
void uart_tx(unsigned char ch)			
{
		SBUF=ch;
		while(TI==0);
		TI=0;
}
unsigned char uart_rx()
{
	while(RI==0);
	RI=0;
	return SBUF;
}
void uart_string(char *s)
{
   while(*s)
   {
      uart_tx(*s++);
   }
}
void uart_int(int num)
{
	    char k=0,s[16];
		if(num==0)
		{
		    uart_tx('0');
			while(1);
		}
		else if(num<0)
		{
			uart_tx('-');
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
				 uart_tx(s[k]);
			 	 delay_ms(100);
		 	}
}


/*
void uart_float(float f)
{
     char i=0;
	 if(f==0)
	 {
		 uart_tx('0');
		 while(1);
	 }
		 
   else if(f<0) 		 
	 {
		 uart_tx('-');
		 f=-f;
		 goto L2;
	 }
	 
L2:	 
	 i=f;
	 uart_int(i);
	 uart_tx('.');
	 
	 i=(f-i)*100;
	 uart_int(i);
	 while(1);
}  
*/
//int my_strcmp(const char *p,const char *q)
//{
//	unsigned int i=0;
//	for(i=0;p[i];i++)
//	{
//			if(p[i]!=q[i])
//			break;
//	}			
//	if(p[i]==q[i])			
//	return 0;
//  else
//  return 1;		
//}
//uart_stringcat(char *p,char *q)
//{
//  unsigned int m,n;
//  for(m=0;p[m];m++);
//
//  for(n=0;q[n];n++,m++)
//  {
//	 p[m]=q[n];
//
//  }
//  p[m]='\0';
//  uart_string("\r\n Before\r\n ");
//  uart_string(p);
//}
