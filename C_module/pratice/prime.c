#include<stdio.h>
main()
{
    int min,max,i,j,c;

    printf("enter min and max\n");
    scanf("%d %d",&min,&max);
   
    
    for(i=min;i<=max;i++)
    {
        for(j=1,c=0;j<=max;j++)
        {
            if(i%j==0)
            c++;
        }

        if(c==2)
            printf("%d ",i);
    }
    printf("\n");
}

