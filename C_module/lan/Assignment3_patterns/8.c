#include<stdio.h>
main()
{

	int i,j,m,c;

	for(i=1,m=1;i<=5;i++,m++)

	{
		m=i;
		c=0;
		for(j=1;j<=i;j++)
		{


			printf("%d",m=m+c);
			c--;
			if(c==-1)
				c=4;

			printf(" ");
		}


		printf("\n");


	}
}


