#include<stdio.h>
main()
{
 int sum=0,c,r,n,temp;

printf("enter the number:\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
  r=n%10;
  c=r*r*r;
 sum=sum+c;
 n=n/10;
}
n=temp;
if(n==sum)

  printf("Armstrong no\n");

else

 printf("Not Armstrong no\n ");

  

}

