#include<stdio.h>
int main()
{
    int num,num2,num3,pos;
    printf("Enter the 3 numbers\n");
    scanf("%d%d%d",&num,&num2,&num3);

    printf("Enter the pos\n");
    scanf("%d",&pos);
    
    printf("Before set= %d\n",num);
    num=num|(1<<pos);
    printf("After set= %d\n",num);
 
    printf("----------------------------------------\n");

    printf("Before clear= %d\n",num2);
    num2=num2&~(1<<pos);
    printf("After clear = %d\n",num2);

    printf("----------------------------------------\n");
    
    printf("Before Toggle= %d\n",num3);
    num3=num3^(1<<pos);
    printf("After Toggle= %d\n",num3);
}
