#include<stdio.h>
int main()
{
    int i,j,sum;

    for(i=1;i<60;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }
         
        if(sum==i)
           printf("Perfect num=%d\n",i);

        else if(sum>i)
            printf("Abundent num=%d\n",i);
        
        else
            printf("Difficient num=%d\n",i);
    }
}
/*
    printf("Perfect Numbers Are :");
    for(i=0;a[i+1]!=0;i++)
    printf("%d ",a[i]);
    printf("\n");

    printf("Abundent Numbers Are :");
    for(i=0;b[i+1]!=0;i++)
    printf("%d ",b[i]);
    printf("\n");

    printf("Difficient Numbers Are :");
    for(i=0;c[i+1]!=0;i++)
    printf("%d ",c[i]);
    printf("\n");
*/
