#include<stdio.h>
main()
{

	int i,j;
	char ch;

	for(i=0,ch='a';i<5;i++,ch++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",ch);
		}

         printf("\n");
	}

}
