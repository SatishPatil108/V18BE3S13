#include<stdio.h>
main()
{

	int a[5],ele,j,i,t;



	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the element...\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

	/////////////////////////////////////

	printf("before....\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	/////////////////////////////////////////////
	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}

	///////////////////////////////////////
	printf("after....\n");
	for(i=0;i<ele;i++)

		printf("%d ",a[i]);
	printf("\n");


}
