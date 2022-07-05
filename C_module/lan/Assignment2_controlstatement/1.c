/* Factorial no*/
#include<stdio.h>
int main()
{
    int fact=1,i,num;
    printf("Enter the no you want the factorial\n");
    scanf("%d",&num);

    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }

    printf("Factorial is : %d\n",fact);
}

