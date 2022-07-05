void lcd_calresult(int p,int q,int r)
{
	 int m;
	 lcd_cmd(0x80);
	 lcd_string("Result is");
	 lcd_cmd(0xC0);
	
 	if(r=='+')
	  {
		  m=(p+q);
		  lcd_int(m);
			while(1);
	  }
		if(r=='-')
	  {
		  m=(p-q);
		  lcd_int(m);
			while(1);
	  }
		if(r=='*')
	  {
		  m=(p*q);
		  lcd_int(m);
			while(1);
	  }
		if(r=='/')
	  {
			if(q==0)
			{
			lcd_string("Syantax Error");
			while(1);
			}
			else
			{	
		  m=(p+q);
		  lcd_int(m);
			while(1);
			}
	  }
}