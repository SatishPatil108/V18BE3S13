#include<stdio.h>

void print_array(const int *,int);
main()
{

 int a[5]={10,20,30,40,50},ele;

 ele=sizeof(a)/sizeof(a[0]);

print_array(a,ele);
printf("\n");


}

void print_array(const int *p, int n)
{

  int i;

 for(i=0;i<n;i++)
printf("%d ",*p++);

}
