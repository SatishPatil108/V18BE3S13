#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

int sum(int,...);
main()
{
	int i=10,j=20,k=30,l;

	l=sum(2,i,j);
	printf("l=%d\n",l);

	l=sum(3,i,j,k);
	printf("l=%d\n",l);
}

int sum(int n,...)
{
	int r,sum=0,i;
	va_start v;

	va_start(v,n);

	for(i=0;i<n;i++)
	{
		r=va_arg(v,int);
		sum=sum+r;
	}
	return sum;
}
