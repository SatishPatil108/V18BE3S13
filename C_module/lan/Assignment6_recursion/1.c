//factorial  number

#include<stdio.h>
int fact(int);
main()
{
	int num,r;
	printf("enter the number\n");
	scanf("%d",&num);

	r=fact(num);

	printf("r=%d\n",r);
}

int fact(int n)
{
	static int fa=1;
	if(n>0)
	{
		fa=fa*n;
		n--;
	        fact(n);
       	}
        
       return fa;
}
