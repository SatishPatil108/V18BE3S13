#include<stdio.h>
main()
{
  int num,s,r;

printf("enter the number:\n");
scanf("%d",&num);

/*for(s=0;num;num<=0)
 
{
r=num%10;
s=s+r;
num=num/10;
}
*/

for(s=0;num;num=num/10)
s=s+num%10;
printf("%d\n",s);

}
