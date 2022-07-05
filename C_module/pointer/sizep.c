#include<stdio.h>
main()
{
 char ch='a', *cp;
int i=10, *ip;

 float f=23.5, *fp;

printf("%d %d %d\n",sizeof(ch),sizeof(i),sizeof(f));

printf("%d %d %d\n",sizeof(*cp),sizeof(*ip),sizeof(*fp));
}

