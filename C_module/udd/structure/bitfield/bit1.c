#include<stdio.h>
#include<stdlib.h>
struct one
{
	int i;
	unsigned int j:3;
	char ch;
};

main()
{
	struct one o1;
//	o1.j=7;


	printf("%d\n",o1.j);
}
