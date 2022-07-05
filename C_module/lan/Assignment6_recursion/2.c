//fibonacci series

#include<stdio.h>
void fibo(int);
main()
{
	int a=0,b=1,num;
	printf("enter the number\n");
	scanf("%d",&num);

	printf("%d %d ",a,b);
	fibo(num);
        printf("\n");
}

void fibo(int n)
{
	static a=0,b=1,c;
	if(n)
	{
		c=a+b;
		a=b;
		b=c;

		printf("%d ",c);
		n--;
		fibo(n);
	    
         }

} 
