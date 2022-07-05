#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    i=num&7;
    i==0?printf("Divisable by 8\n"):printf("Not Divisable by 8\n");

}
