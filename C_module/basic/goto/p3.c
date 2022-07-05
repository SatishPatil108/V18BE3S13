#include<stdio.h>
main()
{
 int i=1,num;
printf("enter the number\n");
scanf("%d",&num);
l1:
printf("%d * %d = %d\n",num,i,num*i);
i++;
if(i<=10)

goto l1;

printf("thanks\n");

}
