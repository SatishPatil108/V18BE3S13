#include<stdio.h>
#include<stdlib.h>
struct one
{
	int i;
	unsigned int j:5;
	char ch;
};

main()
{
	int c=0;
	struct one o1;
	o1.j=1;

	while(o1.j)
	{
		c++;
		o1.j=o1.j<<1;
	}
	printf("c=%d\n",c);
}

