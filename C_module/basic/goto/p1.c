#include<stdio.h>
main()
{
 int num,pos,op,c=0;

 printf("enter the number\n");
scanf("%d",&num);
l1:
printf("enter the pos\n");
scanf("%d",&pos);

if(pos>=0 && pos<=31)
{
printf("enter op\n 1)set\n 2)clear\n 3)compliment\n");
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
printf("unknown option\n");
}
else
{
c++;
printf("wrong bit\n");
if(c<3)
goto l1;
}

}
