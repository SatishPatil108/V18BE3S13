#include<stdio.h>
main()
{
 char *cp;
int i=258, *ip;

 ip=&i;

 cp=(char *)&i;
 
// cp=&ch;

  *cp='a';

printf("*ip=%d *cp=%d\n",*ip,*cp);

}

