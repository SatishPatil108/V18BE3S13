#include<stdio.h>
main()
{
	int i,j;
	char ch;
	for(i=0;i<5;i++)
	{
		for(j=0,ch='a';j<=i;j++)		        
		{
			printf("%c ",ch++);
		} 

		printf("\n");

	}





}
