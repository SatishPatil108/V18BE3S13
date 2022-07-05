#include<stdio.h>
main()
{
int i,bit,num,count=0;

printf("enter the number\n");
scanf("%d",&num);

for(i=0;i<31;i++)
{
bit=num>>i&1;
if(bit)
count++;
}

printf("%d\n",count);


}
