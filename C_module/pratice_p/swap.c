#include<stdio.h>
void swap(int *,int *);
main()
{
	int i=10,j=20;
       	printf("enter the two number..\n");
	scanf("%d %d",&i,&j);
	printf("before swapping i=%d j=%d \n",i,j);
        swap(&i,&j);

	printf("After swapping i=%d j=%d \n",i,j);

}

void swap(int *m, int *n)
{
	int k;

	k=*m;
	*m=*n;
	*n=k;

}

