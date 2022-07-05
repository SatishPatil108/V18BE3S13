#include<stdio.h>
int prime_check(int);
main()
{
	int num,r;

	printf("enter the number...\n");
	scanf("%d",&num);

	r=prime_check(num);
	if(r==1)
		printf("prime..\n");
	else
		printf("not..\n");
}

int prime_check(int n)
{

	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		break;
	}
	if(n==i)
		return 1;
	else
		return 2;

}





