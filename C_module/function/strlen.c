#include<stdio.h>
int my_strlen(const char *);
main()
{

	char s[10];

	int l;

	printf("enter the string\n");
	scanf("%s",s);
         
        printf("\n");
	l=my_strlen(s);

	printf("l=%d\n",l);

}
int my_strlen(const char *p)
{
	int c=0;
	while(*p)
	{
		c++;
		p++;
	
	}
	return c;
}
