#include<stdio.h>
void print(int*,int);
main()
{
	int i,a[5]={10,20,30,40,50},ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%d\n",ele);

        for(i=0;i<ele;i++)
        printf("%d ",a[i]);
        printf("\n");

	print(a,ele-1);

        for(i=0;i<ele;i++)
	printf("%d ",a[i]);
        printf("\n");

}

void print(int *p,int i)
{
  static int j=0;
  int r;
 
   r=p[j];
   p[j]=p[i];
   p[i]=r;
 
   j++;
   i--;
   if(j<i)
   print(p,i);
}
/*

void print(int*p,int q)
{
	if(q>=0)
	{
		printf("%d ",p[q]); 

		print(p,q-1);
	}

}
*/





