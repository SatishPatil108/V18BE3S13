int lcd_mystrcmp(const char *p,const char *q)
{
	unsigned int i=0;
	for(i=0;p[i];i++)
	{
			if(p[i]!=q[i])
			break;
	}			
	if(p[i]==q[i])			
	return 0;
  else
  return 1;		
}