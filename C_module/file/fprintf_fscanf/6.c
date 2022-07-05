#include<stdio.h>
main()
{
  char s[20];
  
  FILE *fp;
 
  fp=fopen("data","r");
  fscanf(fp,"%s",s);
  printf("data=%s\n",s);
}
