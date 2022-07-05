#include<stdio.h>
main()
{

	int i,j,k,p;

	for(i=4;i>=0;i--)
	{
		for(j=-4;j<=4;j++)
		{       
			k=j;
			if(k<0)
				k=-k;
                         
			if(i<=k)
				printf("%d",5-i);
			else
				printf(" ");

		}

		printf("\n");
	}
}
