#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);
  
    i=num&(num-1);

    if(i==0)
        printf("Power of two\n");
    else
        printf("Not Power of two\n");
}

