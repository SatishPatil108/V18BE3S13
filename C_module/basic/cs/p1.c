#include<stdio.h>
main()
{
char ch;
printf("enter the charcter..\n");
scanf("%c",&ch);

printf("hello..\n");

//if(ch>=97 && ch<=122)

//if(ch>='a' && ch<='z')

//ch=ch-32;

ch=ch&~(32);

ch=ch|(32);


printf("ch=%c and its ASCII=%d\n",ch,ch);

printf("hai...\n");



}
