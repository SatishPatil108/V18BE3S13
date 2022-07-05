#include<stdio.h>
int fact(int);
main()
{

	int num,r;
	printf("enter the number\n");
	scanf("%d",&num);

	r=fact(num);
	printf("%d\n",r);

}

int fact(n) 
{
	if(n>0)
   		return n*fact(n-1);
        else
                 return 1;
}
