#include<stdio.h>
main()
{
  int num,r,s=0;

  printf("enter the number:\n");
  scanf("%d",&num);

while(num)
{
  r=num%10;
  s=s*10+r;
  num=num/10;
}

printf("%d\n",s);

}








