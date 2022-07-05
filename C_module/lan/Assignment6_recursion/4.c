//Reversre the given number 

#include<stdio.h>
int digitrev(int);
main()
{
	int num,rev;
	printf("enter the number\n");
	scanf("%d",&num);

	rev=digitrev(num);
	printf("rev=%d\n",rev);
}

int digitrev(int n)
{
	static int sum=0;
	if(n)
	{
		sum=sum*10+n%10;
		n/=10;
		digitrev(n);
	}
	return sum;


}
