/* Armstrong no 1 to 500 */
#include<stdio.h>
int main()
{
    int sum,i,j,r=0;
    printf("Armstrong no are :");
    for(i=1;i<=500;i++)
    {
        sum=0;
        for(j=i;j>0;j/=10)
        {
            r=j%10;
            sum=sum+r*r*r;
        }
        if(sum==i)
            printf(" %d",i);
    }
    printf("\n");
}
