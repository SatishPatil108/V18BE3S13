#include<stdio.h>
main()
{

  int i=10;
   char *cp;

 cp=(char *)&i;

 if(*cp==i)
  printf("little enadian\n");
 else
  printf("bigenadian\n");

}
