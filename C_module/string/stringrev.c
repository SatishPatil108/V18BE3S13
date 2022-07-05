#include<stdio.h>
main()
{

	int i,j;

	char s[10],ch;

	printf("enter the string\n");
	scanf("%s",s);

	printf("before s=%s\n",s);
	for(i=0;s[i];i++);

	for(j=0,i=i-1;i>j;j++,i--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;

	}

	printf("after s=%s\n",s);

}
