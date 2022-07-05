#include<stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{

		for(j=0,k=1;j<=i;j++,k=k+2)
		{


			printf("%d ",k);
			

		} 


		printf("\n");
	} 

}
