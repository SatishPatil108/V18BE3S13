#include<stdio.h>
void Bubble_sort(int*,int);
void print_array(const int *,int);
main()
{
	int a[5]={50,5,12,15,7},ele;

	ele=sizeof(a)/sizeof(a[0]);

        print_array(a,ele);
	printf("\n");

	Bubble_sort(a,ele);
	printf("\n");

	print_array(a,ele);
        printf("\n");
}

void print_array(const int*p,int n)
{
 int i;
 for(i=0;i<n;i++)
 printf("%d ",*p++);
}
void Bubble_sort(int *p,int ele)
{
 int i,j,t;
 for(i=0;i<ele-1;i++)
    {
      for(j=0;j<ele-1-i;j++)
       {
         if(p[j]>p[j+1])
          {
             t=p[j];
             p[j]=p[j+1];
             p[j+1]=t;
           }
       }
   }
}
