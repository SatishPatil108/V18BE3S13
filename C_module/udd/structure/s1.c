#include<stdio.h>
struct one
{
	int i;
	char ch;
	float f;
}o1;

main()
{
	int i;

//	struct one o1={10,'a',22.5};

//	struct one o1={10,'a'};
	o1.i=10
	o1.ch='a';
	o1.f=23.5;

	printf("%d %c %f\n",o1.i,o1.ch,o1.f);
//        printf("i=%d\n",i);  it is auto variable
}

