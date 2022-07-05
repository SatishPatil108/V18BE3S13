#include<stdio.h>
main()
{

int i=258;
int *ip;
char *cp;

ip=&i;

cp=(char *)&i;

printf("&i=%p \n",&i);

printf("ip=%p ip+1=%p\n",ip,ip+1);

printf("cp=%p  cp++=%p\n",cp,cp++);

}
