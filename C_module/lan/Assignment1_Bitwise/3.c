#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    i=num|1;
    (i>0)?printf("Positive Number\n"):printf("Negative Number\n");
}
