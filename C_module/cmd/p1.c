#include<stdio.h>
int printf(const char*format,...);
main()
{
int i;
const char s[]="hello\n";
for(i=0;s[i];i++)

printf(s+i);
//printf("hello\n");

//printf(s);

}

