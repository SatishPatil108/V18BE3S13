#include<stdio.h>
main()
{

	int i,j,k,c;

	for(i=0,c=0;i<5;i++,c++)
	{
		for(j=0;j<9;j++)
		{
			if(j>=(4-i) && j<=(4+i))
			{
				//		c%2==0?printf("*A*"):printf("*");	
				if(i%2==0)
				{
					printf("*");

				}
				else 
				{

					printf("*A*");
				}



			}

			else
				printf(" ");
		}

		printf("\n");
	}
   
}
