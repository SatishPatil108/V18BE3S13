#include<stdio.h>
main()
{

int i=10,j;

//j=i++ + --i + i + i-- + --i;

j=++i + i++ + i++ + --i + i + i--;

printf("i=%d j=%d\n",i,j);


}
