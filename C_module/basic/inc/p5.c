#include<stdio.h>
main()
{
int i=10,j;

//printf("%d %d %d %d %d\n",i++,i,++i,i++,++i);

//j=i++ + ++i + i++ + ++i;

j=++i + ++i + i++ + ++i + i++ + ++i;

printf("i=%d j=%d\n",i,j);

}
