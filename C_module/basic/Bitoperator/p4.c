#include<stdio.h>
main()
{

int  i=0, j=20,k=30,l=40,m;

printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

m=i||(j=200)&&(k=300)||(l=400);

printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);


}
