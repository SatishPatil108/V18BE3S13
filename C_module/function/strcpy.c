#include<stdio.h>
void my_strcpy(const char *,char *);
main()
{
char s[10],d[10];
printf("enter the string\n");
scanf("%s",s);

printf("s=%s\n",s);
my_strcpy(s,d);

printf("s=%s d=%s\n",s,d);

}

void my_strcpy(const char *p,char *q)
{
    while(*p)
   *q++=*p++;

   *q=*p;

}
