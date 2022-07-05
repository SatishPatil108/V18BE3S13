#include<stdio.h>
#include<stdlib.h>
main()
{
	int **p;
	int r,c,i,j;

	printf("enter the row\n");
	scanf("%d",&r);

	printf("enter the column\n");
	scanf("%d",&c);

	p=malloc(sizeof(int*)*r);

	for(i=0;i<r;i++)
		p[i]=malloc(sizeof(int)*c);

	printf("enter the elements\n");
        for(i=0;i<r;i++)
         for(j=0;j<c;j++)
	scanf("%d",&p[i][j]);
	printf("---------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",p[i][j]);
		printf("\n");
		
	} 
}
