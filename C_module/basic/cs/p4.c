#include<stdio.h>
main()
{
  int num,pos,op;

printf("enter the num...\n");
scanf("%d",&num);

printf("enter the pos no...\n");
scanf("%d",&pos);

if(pos>=0 && pos<31)
{
printf("enter op\n 1)set\n 2)clear\n 3)comp\n");
scanf("%d",&op);

if(op==1)
{
num=num|1<<pos;
printf("num=%d\n",num);
}
else if(op==2)
{
 num=num&~(1<<pos);
printf("num=%d\n",num);
}
else if(op==3)
{
num=num^1<<pos;
printf("num=%d\n",num);
}
else
printf("unknown no\n");

}
else
printf("wrong bit\n");

}


