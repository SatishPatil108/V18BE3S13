#include<stdio.h>
int main()
{

	int a[5],ele,i,j,t;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter the element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

       	printf("Before...........................................\n");
        for(i=0;i<ele;i++)   
		printf("%d ",a[i]);
	printf("\n");
        				
       	
        				
   /////////////////////////////////////////////////////

	for(i=0;i<ele;i++);

	for(i=i-1,j=0;i>j;i--,j++)
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
        printf("After............................................\n");
                for(i=0;i<ele;i++)   
		printf("%d ",a[i]);

	printf("\n");
 ///////////////////////////////////////////////////////


}
