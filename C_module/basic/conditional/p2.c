#include<stdio.h>
main()
{
  int num;
  printf("enter the number...\n");
  scanf("%d",&num);

//num%2?printf("odd\n"):printf("even\n");

// num>=0?printf("+ve\n"):printf("-ve\n");

(num & num-1)==0?printf(" not power of 2\n"):printf(" power of 2\n");

}
