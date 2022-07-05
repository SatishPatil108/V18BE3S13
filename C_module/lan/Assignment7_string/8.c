#include<stdio.h>
main()
{

	char s[50];
	int i,j,c;

	printf("enter the string\n");
	gets(s);

	for(i=0,c=1;s[i];i++)
	{
		if(s[i]==' ')  
		{
			c++;
		}
     
       

	}
	printf("no of words=%d\n",c);

} 


