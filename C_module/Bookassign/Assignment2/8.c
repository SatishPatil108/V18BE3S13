#include<stdio.h>
main()
{
int x,y;

printf("enter the no..\n");
scanf("%d",&x);

y=(x>0)?-x:x;

//printf("absolute value of %d is  %d\n",x,y);

printf("%d %d\n",x,y);
}
