#include<stdio.h>
main()
{
char ch;
printf("enter the char..\n");
scanf("%c",&ch);

printf("before the char=%c\n",ch);

//ch=ch&~(32);
//ch=ch|(32);
//ch=ch^(32);
ch=ch|~(32);


printf("after the char=%c\n",ch);

}
