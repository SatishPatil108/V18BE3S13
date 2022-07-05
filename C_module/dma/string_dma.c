#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p;

	p=malloc(sizeof(char)*10);

	printf("enter the string\n");
	scanf("%s",p);
	printf("p=%s\n",p);

}
