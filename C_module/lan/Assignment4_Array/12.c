#include<stdio.h>
int main()
{
        int n,sum=0,i,r;
        printf("enter the n value\n");
	scanf("%d",&n);

        int a[n];
 
	for(i=1;i<=n;i++)
	{
		r=i*i;
		sum=sum+r;
		a[n]=r;
          
    	   printf("%d ",a[n]);

	}
        printf("\n%d\n",sum);
}
