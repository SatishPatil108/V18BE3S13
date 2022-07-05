#include<stdio.h>
main()
{
int num,pos;
printf("enter the number..\n");
scanf("%d",&num);

printf("enter the pos ...\n");
scanf("%d",&pos);

//num&1<<pos?printf("set\n"):printf("clear\n");

num>>pos&1?printf("set\n"):printf("clear\n");


}
