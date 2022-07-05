#include<stdio.h>
main()
{

	int a[10],ele,j,i,l;



	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the element...\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

	/////////////////////////////////////

	l=a[0];
	j=0; 

	for(i=0;i<ele;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
			j=i;
		} 
		printf("l=%d  j=%d\n",l,j);

	}
}
