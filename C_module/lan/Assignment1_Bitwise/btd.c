#include<stdio.h>
void main()
{
    int n,i,j,b=0,r=0,d=1;
    printf("Enter number\n");
    scanf("%d",&n);
    while(n)
    {
        b=b*2;
        
        i=n%10;
        if(i==1)
        {
            r=r+(i*b)+d;
            d=0;
            b++;
            n=n/10;
        }       
        n=n/10;
        b++;
        d=0;
    }
    printf("%d\n",b);
}
