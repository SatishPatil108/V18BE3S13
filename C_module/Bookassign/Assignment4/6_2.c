#include<stdio.h>
main()
{
	int i,j,k,l,m,n;

	for(i=0;i<3;i++)
	{

		for(j=0;j<=i;j++)
			printf(" ");

		for(k=0;k<3-i;k++)
			printf("* ");

		printf("\n");
	}
  
 	for(l=1;l<3;l++)
          {
       
               for(m=1;m<2-l;m++)
                 printf(" ");

                for(n=1;n<l+1;n++)
                printf(" *");


                 printf("\n");
           }
        

}

