#include<stdio.h>
int main()
{
    int i,j,temp,sum,r;
    printf("Palindrome Numbers Are :");

    for(i=1;i<1000;i++)
    {
        temp=i,sum=0;
        for(j=i;j>0;j/=10)
        {
            r=j%10;
            sum=sum*10+r;
        }

        if(i==sum)
            printf("%d ",i);

    }
    printf("\n");
}


