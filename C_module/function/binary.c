#include<stdio.h>
void print_binary(int);       //function declearation
main()
{

int num;
printf("enter the number...\n");
scanf("%d",&num);

print_binary(num);            // function calling,here  num is actual argument
printf("\n");

}

void print_binary(int n)        // function defination, here n is formal argument
{                         
  int pos;                             //here we can also take formal argument &   
                              //   actual argument same ,use the argument in operation                                                       

 for(pos=31;pos>=0;pos--)
  printf("%d ",num>>pos&1);


}
