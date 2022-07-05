#include<stdio.h>
void my_stringcbc(const char *);
main()
{
 char s[10];
printf("enter the string..\n");
scanf("%s",s);

 my_stringcbc(s);

printf("\n");
}
void my_stringcbc(const char *p)
{
 while(*p)
  printf("%c ",*p++);
}

