#include<stdio.h>
int main()
{
    int num,pos,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    printf("Before..........................................................\n");
    for(i=31;i>=0;i--)
    printf("%d ",num>>i&1);
    printf("\n");

    printf("num=%d  O=%o H=%x\n",num,num,num);

    num=~(num);

    printf("After...........................................................\n");
    for(i=31;i>=0;i--)
    printf("%d ",num>>i&1);
    printf("\n");

    printf("num=%d  O=%o H=%x\n",num,num,num);
}

       
