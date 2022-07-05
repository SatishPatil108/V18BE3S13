#include<stdio.h>
main()
{
	int i;
	char s[10],d[10];
	printf("enter the string\n");
	scanf("%s",s);

	for(i=0;i<s[i];i++)
		d[i]=s[i];

	d[i]=s[i];    //  for '\0' 

	printf("s=%s d=%s\n",s,d);

}

