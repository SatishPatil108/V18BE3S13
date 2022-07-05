#include<stdio.h>
main()
{

	int a[5]={10,20,30,40,50},b[5],i,ele;

	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=0;i<ele;i++)
		printf("%d",b[i]);
	printf("\n");
	///////////////////////////////////////

	for(i=0;i<ele;i++)
		b[i]=a[i];
	////////////////////////////////////////

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=0;i<ele;i++)
		printf("%d ",b[i]);
	printf("\n");


}
