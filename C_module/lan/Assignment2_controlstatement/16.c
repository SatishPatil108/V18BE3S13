#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    printf("Enter the you want to fabonacci series\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    
    while(1)
    {
        c=a+b;
        if(c>n)
            break;
        else
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}

