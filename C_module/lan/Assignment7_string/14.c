#include<stdio.h>
main()
{

	char s[20],ch;
	int i;

	printf("enter the string\n");
        gets(s);

	printf("Before %s\n",s);


	for(i=0;s[i];i++)
	{
		s[i]=s[i]^32;
	}

    puts(s);
}




