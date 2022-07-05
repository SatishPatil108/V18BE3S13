#include<stdio.h>
	void print_array( int* , int);
main()
{
	int a[5]={10,20,30,40,50},ele;

	ele=sizeof(a)/sizeof(a[0]);
	print_array(a,ele);
	printf("\n");

	Bubble_sort(a,ele);
	print_array(a,ele);
	printf("\n");

}

void Bubble_sort(int *p,int)

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
