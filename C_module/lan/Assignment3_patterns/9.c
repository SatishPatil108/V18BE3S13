#include<stdio.h>
main()
{

	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0,k=1;j<9;j++)

			if(j>=(4-i)&&j<=(4+i))
			{
				printf("%d",k);
				k++;
			}

			else
			{
				printf(" ");
			}
		printf("\n");
         }
}
