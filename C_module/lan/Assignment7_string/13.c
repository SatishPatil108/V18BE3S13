#include<stdio.h>
main()
{

	char s[20];
	int i;

	printf("enter the string\n");
	gets(s);

	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
			printf("%c is lower case\n",s[i]);
		else if(s[i]>='A' && s[i]<='Z')
			printf("%c is  upper case\n",s[i]);
		else if(s[i]>='0' && s[i]<='9')
			printf("%c is Digit\n",s[i]);
		else
			printf("%c is special character\n",s[i]);
	}
}
