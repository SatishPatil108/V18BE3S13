#include<stdio.h>
main()
{

  int i,j,k;
  for(i=0;i<6;i++) 
 	{
          for(j=4;j>=i;j--)
          printf(" ");
          
          for(k=1,k<1+i;k++)
    
          printf("* ");
          
            printf("\n");
         }
}
   

