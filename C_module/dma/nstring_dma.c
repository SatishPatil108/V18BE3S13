#include<stdio.h>
#include<stdlib.h>
main()
{
 int i,n;
 printf("enter the n\n");
 scanf("%d",&n);

// char *p[n];
// for(i=0;i<n;i++)
// p[i]=malloc(sizeof(char)*10);

  char **p;

 p=malloc(sizeof(char*)*n);

 for(i=0;i<n;i++)
 p[i]=malloc(sizeof(char)*10);
 
 printf("enter the strings\n");
 for(i=0;i<n;i++)
 scanf("%s",p[i]);
 printf("----------------------------\n");

 for(i=0;i<n;i++)
 printf("%s\n",p[i]);

}
