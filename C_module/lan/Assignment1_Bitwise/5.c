/*check the number power of 2 or not */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    (n&n-1)==0?printf("Power of 2\n"):printf("Not power of 2\n");
}
