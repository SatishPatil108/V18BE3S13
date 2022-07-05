#include<stdio.h>
main()
{
    int i,j,sum;
    int min,max;
    printf("enter min and max\n");
    scanf("%d%d",&min,&max);

  for(j=min;j<=max;j++)
  {
     for(i=1,sum=0;i<j;i++)
     {
       if(j%i==0)
        sum=sum+i;
     }

     if(sum==j)
     {
         printf("perfect number=%d\n",j);
     }
     else if(sum>j)
     {
         printf("Abundent number=%d\n",j);
     }
     else
     {
         printf("Dificient number=%d\n",j);
     }
  }

}


