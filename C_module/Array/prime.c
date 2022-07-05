#include<stdio.h>
main()
{

	int a[10],ele,j,i,c;



	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the element...\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

	/////////////////////////////////////

	for(i=0;i<ele;i++)
	{
		for(j=2,c=0;j<a[i];j++)

		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			c++;
			printf("%d ",a[i]);

		}



	}
      printf("\n");
}
