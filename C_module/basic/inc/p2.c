#include<stdio.h>
main()
{
  int i=10,j=20,k;
printf("i=%d j=%d k=%d\n",i,j,k);

k=i++ + ++j;

printf("i=%d j=%d k=%d\n",i,j,k);

}
