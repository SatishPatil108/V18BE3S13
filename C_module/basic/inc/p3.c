#include<stdio.h>
main()
{

int i=10,j=20;

printf("i=%d j=%d\n",i,j);

i=++i + j++;

j=i++ + j++;

printf("i=%d j=%d\n",i,j);

}
