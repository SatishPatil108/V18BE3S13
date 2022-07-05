#include<stdio.h>
int my_stringlen(const char *);
main()
{
	int l;
	char s[20];
	printf("enter the string\n");
	scanf("%s",s);

	l=my_stringlen(s);

       printf("%d\n",l);
}

int my_stringlen(const char *p)
{
	int i,c;
	for(i=0,c=0;p[i];i++);
	return i;
}
