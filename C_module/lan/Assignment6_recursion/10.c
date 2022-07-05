#include<stdio.h>
void largele(int *,int);
main()
{
	int i,n,l;
	printf("enter the element\n");
	scanf("%d",&n);

	int a[n];
	printf("enter the array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	largele(a,n);
}

void largele(int *p,int n)
{
	static  int l=0;
	static int j=0;
	if(j==0)  
	l=p[j];

	if(j<n)
	{    
		if(p[j]>l)
			l=p[j];        
		j++;
		if(j<n)
			largele(p,n);
	}    

	if(j==n)
	{
		printf("Largest Number=%d\n",l);
		j++;
	}

}
