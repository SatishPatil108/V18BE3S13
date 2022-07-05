#include<stdio.h>
main()
{

	int i,j,t;


	char s[10];

	printf("enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++);

	printf("before s= %s\n",s);
	for(i=i-1,j=0;i>j;i--,j++)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;

	}


	printf("after s= %s\n",s);
}
