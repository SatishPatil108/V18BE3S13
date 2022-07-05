/* first 100 prime no */
#include<stdio.h>
int main()
{
    int c=0,m,n;
    printf("first 100 prime no are :");
    for(m=1;c<=100;m++)
    {
        for(n=2;n<m;n++)
        {
            if(m%n==0)
                break;
        }
        if(m==n)
        { 
            c++;
            printf(" %d",m);
        }
    }

    printf("\n");
}
