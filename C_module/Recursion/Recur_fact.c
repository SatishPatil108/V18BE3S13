#include<stdio.h>
int fact(int);
main()
{
int num,r;
printf("enter the number\n");
scanf("%d",&num);
r=fact(num);
printf("r=%d\n",r);
}

int fact(int n)
{

if(n>0)
return n*fact(n-1);
return 1;

}

