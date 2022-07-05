#include<stdio.h>
main()
{

  int i,j,t;
  
  printf("enter the number...=\n") ;
  scanf("%d %d" ,&i,&j);

 printf("befor swaping i=%d j=%d\n",i,j);

t=i;
i=j;
j=t;

printf("after swaping i=%d j=%d \n",i,j);

}
