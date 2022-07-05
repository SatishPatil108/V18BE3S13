#include<stdio.h>
#include<stdlib.h>
main()
{
 int i;
 char *p[5];
 
 for(i=0;i<5;i++)
 p[i]=malloc(sizeof(char)*10);

 printf("enter the strings\n");
 for(i=0;i<5;i++)
 scanf("%s",p[i]);
 printf("----------------------------\n");

 for(i=0;i<5;i++)
 printf("%s\n",p[i]);

}
