#include<stdio.h>
main()
{

	int i,j,k,l,m,n;

	for(i=0;i<4;i++)
	{

		for(j=0;j<4-i;j++)
			printf(" ");

		for(k=0;k<=i;k++)
			printf("* ");

		printf("\n");
	}


	for(l=0;l<3;l++)
	{
		for(m=0;m<=l;m++)
			printf(" ");

		for(n=0;n<3-l;n++)
			printf(" *");


		printf("\n");
	}
}
