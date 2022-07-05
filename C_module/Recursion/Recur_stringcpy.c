#include<stdio.h>
void my_strcpy(char *, char *);
main()
{
	char s[10],d[10];
	printf("enter the string\n");
	scanf("%s",s);
 

	my_strcpy(s,d);
        printf("s=%s d=%s\n",s,d);
	printf("\n");
}

void my_strcpy(char *p,char *q)
{
	if(*p) 
	{
		*q=*p;
		my_strcpy(p+1,q+1);
	}
	else
		*q=*p;
}
