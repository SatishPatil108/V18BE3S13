#include<stdio.h>
main()
{
 FILE *fp;
 char s[10];

 fp=fopen("d1","r");

 fgets(s,8,fp);
 printf("s=%s\n",s);
}
