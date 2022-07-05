#include<stdio.h>
int main()
{

	int a[]={0,3,1,0,5,1,2,0,4,5},b[3];
	int ele,i,j,k,c;
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	////////////////////////



	for(i=0,c=0;i<ele;i++)
	{
		for(j=0,c=0;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				c++;
                       if(i>j)
                        break;  	
			}

		}
                 if(c>1)		
			printf("%d.... times %d\n",a[i],c);
	}
}

