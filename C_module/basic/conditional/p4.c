#include<stdio.h>
main()
{
 int pos;
  char ch;
printf("enter the char...\n");
scanf("%c",&ch);

//printf("enter the pos...\n");
//scanf("%d",&pos);

ch&(32)?printf("lower case\n"):printf("upper case\n");

}
