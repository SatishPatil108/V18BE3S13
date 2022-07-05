//sum of digit of given number

#include<stdio.h>
int sofdigit(int);
main()
{
	int num,l;
	printf("enter the number\n");
	scanf("%d",&num);

	l=sofdigit(num);
	printf("l=%d\n",l);
}

int sofdigit(int n)
{
	static int sum=0;
	if(n)
	{
		sum=sum+n%10;
		n/=10;
		sofdigit(n);
	}
	return sum;


}
