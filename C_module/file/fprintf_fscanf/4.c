#include<stdio.h>
main()
{
	int a[5],i;
	FILE *fp;

	fp=fopen("data","r");

	for(i=0;i<5;i++)
	fscanf(fp,"%d",&a[i]);

	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	printf("\n");

}
