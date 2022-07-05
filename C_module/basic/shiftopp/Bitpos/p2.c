#include<stdio.h>
main()
{
 int num,pos;
printf("enter the no...\n");
scanf("%d",&num);

printf("enter the bit pos no...\n");
scanf("%d",&pos);

printf("before num=%d\n",num);

//num=num&~(1<<pos);

num=num^1<<pos;

printf("after num=%d\n",num);



}
