#include<stdio.h>
main()
{

	int i,j,k,n;

   //	for(i=-4;i<=4;i++)
        for(i=1;i<=9;i++)

	{

	//	k=i;
	///	if(k<0)
	///	 	k=-k;
           //     n=5-k;
		for(j=1;j<=i;j++)
		{
          //              n=5-k;
			if(j>=i && j<=8+i)
				printf("* ");
		
				
		}
		printf("\n");
	}
}
