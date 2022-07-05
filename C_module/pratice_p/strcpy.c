#include<stdio.h>
void my_strcpy(char *,const char *);
main()
{
	char s[10],d[10];
	printf("enter the string\n");
	scanf("%s",s);
       printf("before..s=%s\n",s);
	my_strcpy(d,s);
	printf("After d=%s s=%s\n",d,s);
}

void my_strcpy(char *q,const char *p)
{
	int i;

	for(i=0;p[i];i++)
		q[i]=p[i];

	q[i]=p[i];

}
