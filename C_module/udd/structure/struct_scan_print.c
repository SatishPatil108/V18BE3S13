#include<stdio.h>
struct st
{
       int i;
       char ch;   
       float f;
};

main()
{
	struct st s1;
	printf("enter the f\n");
	scanf("%f",&s1.f);

	printf("enter the i\n");
	scanf("%d",&s1.i);

	printf("enter the ch\n");
	scanf(" %c",&s1.ch);

	printf("%d %c %f\n",s1.i,s1.ch,s1.f);
}
