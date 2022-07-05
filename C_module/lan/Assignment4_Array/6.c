#include<stdio.h>
int main()
{

	int a[8],ele,i,j,n;
	ele=sizeof(a)/sizeof(a[0]);

	printf("enter the element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("enter the delete arrow no\n");
	scanf("%d",&n);

	for(i=0;i<ele;i++)   
		printf("%d ",a[i]);
	printf("\n");

        //////////////////////////////////////////
	for(i=0;i<ele;i++)
	{
		if(i==n)
		{
//			printf("  ");
			continue;
		}

		else
		{
			printf("%d ",a[i]);
		}
	}
  
         printf("\n");
        /////////////////////////////////////////////////
}

