#include<stdio.h>
main()
{
	int i,j,k;

	for(i=1;i<=6;i++)

	{

		for(j=1;j<=i;j++)
		{
			/*	if(j==1)
				{
				printf("1",j);
				} 
				else if(j==3)
				{
				printf("1",j);
				}

				else if(j==5)
				{
				printf("1",j);
				}

				else
				printf("0",j);

			 */

			k=j%2;
			printf("%d",k);   



                  }

			printf("\n");
		}
	}





