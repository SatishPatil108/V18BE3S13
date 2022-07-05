#include<stdio.h>
int main()
{
    int num,rpos,lpos,i,j,pos;

    printf("Enter the number\n");
    scanf("%d",&num);

    printf("Enter the pos\n");
    scanf("%d",&pos);

    printf("Before.........................................................\n");
    for(i=31;i>=0;i--)
    printf("%d ",num>>i&1);
    printf("\n");

    //////////////////////////////////////////////////////////////

    for(i=31;i>=0;i--)
    {
        if(pos==0)
        {
            num=num>>31&1;
            printf("%d ",num);
        }
        else
        {
           num=num>>pos&1;
           printf("%d ",num);
        }
    }

    printf("\n");

 
}
