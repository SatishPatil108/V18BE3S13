#include<stdio.h>
main()
{

	int b[2][3],i,j,r,c;

	r=sizeof(b)/sizeof(b[0]);
	c=sizeof(b[0])/sizeof(b[0][0]);

	printf("enter the element\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);

	printf("-----------------------------------\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
