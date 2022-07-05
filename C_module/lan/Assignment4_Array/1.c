#include<stdio.h>
int main()
{

	int a[10],ele,i,sum=0,product=1;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter the element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)   
		printf("%d ",a[i]);
	printf("\n");


	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		else
		{	
			product=product*a[i];
		}
	}
	printf("%d %d\n",sum,product);

}
