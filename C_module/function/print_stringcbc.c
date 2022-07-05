#include<stdio.h>
void print_string(const char *);
main()
{
	char s[10];

	printf("enter the string\n");
	scanf("%s",s);

	print_string(s);

	printf("\n");

}

void print_string(const  char *p)
{
	while(*p)
	{
		printf("%c ",*p++);
	}
}


