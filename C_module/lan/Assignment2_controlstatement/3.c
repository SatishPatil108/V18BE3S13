/* Reverse the digit */
#include<stdio.h>
int main()
{
    int num,sum,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(i=num,sum=0;i>0;i/=10)
    {
        sum=sum*10+i%10;
    }

    printf("Reverse is :%d\n",sum);
}
