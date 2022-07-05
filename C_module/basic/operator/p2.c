#include<stdio.h>
main()
{
 int i,j;

 printf("enter the number...\n");
 scanf("%d %d",&i,&j);

 printf("befor swaping i=%d j=%d\n",i,j);

// i=i+j;
// j=i-j;
// i=i-j;

//   i=i*j; 
//   j=i/j;
 //  i=i/j;


   i=i+j-(j=i); 

 printf("after swaping i=%d j=%d\n",i,j);

}
