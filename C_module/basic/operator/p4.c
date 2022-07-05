#include<stdio.h>
main()
{

   unsigned long int i=2000000000,j=3;
   unsigned long long k;
//   k=i*j; 
  k=(long long int)i*j;
   
   printf("i=%lu j=%lu k=%llu\n",i,j,k);

}
