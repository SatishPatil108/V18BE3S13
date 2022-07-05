#include<stdio.h>
int main()
{
    int i,j,m;
    printf("Enter the number\n");
    scanf("%d%d%d",&i,&j,&m);

    printf("i=%d j=%d m=%d\n",i,j,m);

    if(i>j)
    {
        if(i>m)
        {
            printf("Biggest No is=%d\n",i);
        }

    }
    else if(j>m)
    printf("Biggest No is=%d\n",j);

    else
    printf("Biggest No is=%d\n",m);
}

