#include<stdio.h>
main()
{
  int num,i;
 printf("Enter the number\n");
scanf("%d",&num);

i=31;
while(i>=0)
{

printf("%d",num>>i&1);
i--;

}



}
