#include<stdio.h>
main()
{

 int i;
 char s[5][10];

 printf("enter the five string\n");
 for(i=0;i<5;i++)
 scanf("%s",s[i]);

printf("---------------------------\n");

for(i=0;i<5;i++)
printf("%s\n",s[i]);

}
