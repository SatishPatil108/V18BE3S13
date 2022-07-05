#include<stdio.h>
main()
{
int num,pos;
printf("enter the number\n");
scanf("%d",&num);

for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%8==0)

printf(" ");
}


printf("\n thanks..\n");

}
