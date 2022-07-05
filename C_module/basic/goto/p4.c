#include<stdio.h>
main()
{

int num,pos;

printf("enter the number\n");

scanf("%d",&num);

pos=sizeof(num)*8-1;
l1:

printf("%d",num>>pos&1);
if(pos%8==0)
printf(" ");
pos--;
if(pos>=0)
goto l1;

printf("\n thanks\n");
}
