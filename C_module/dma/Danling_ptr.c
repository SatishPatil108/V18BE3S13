#include<stdio.h>
#include<stdlib.h>
main()
{
  char *p;
  p=malloc(10);

 printf("p=%u\n",p);

 free(p);

 p=0;

 printf("p=%u\n",p);
}
