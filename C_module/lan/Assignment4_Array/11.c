#include<stdio.h>
main()
{

	int a[]={10,2,4,5,2,2,3,4,6,5,8,9,2},b[10];
	int ele,i,j,k,c=0,l=0;
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	////////////////////////



	for(i=0;i<ele-c;i++)
	{ 
		for(j=i+1;j<ele-c;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<ele-c;k++)
				{
					a[k]=a[k+1];
				}
				c++;
				b[l]=a[i];
				l++;
				j=i+1;
			}

		}		




		printf("\n first slot \n");
		for(i=0;i<ele-c;i++)
			printf("%d ",a[i]);


		printf("\n second slot\n ");
		for(l=0;l<c;l++)
			printf("%d ",b[l]);
	

}













