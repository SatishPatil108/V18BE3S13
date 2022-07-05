#include<stdio.h>
int main()
{
    int pos,num,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    printf("Enter the pos\n");
    scanf("%d",&pos);

    printf("Before...........................................................\n");
    for(i=31;i>=0;i--)
    printf("%d ",num>>i&1);
    printf("\n");
      
    num=num^(1<<pos);

    printf("After............................................................\n");

    for(i=31;i>=0;i--)
    printf("%d ",num>>i&1);
    printf("\n");
}
