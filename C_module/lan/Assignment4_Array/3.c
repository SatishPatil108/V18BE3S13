#include<stdio.h>
main()
{

	int a[5],b[5],ele,ele1,i,j,c;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter the element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)   
		printf("%d ",a[i]);
	printf("\n");
	////////////////////////////////////////////

        printf("prime no are :");
        for(i=0,c=0;i<ele;i++)
	{      

		for(j=2;j<a[i];j++) 
		{
			if(a[i]%j==0)
       			break;
		} 
		if(a[i]==j)
		{      
                        c++;
		 	b[i]=a[i];
		       printf("%d ",b[i]);
        
        
                 }    
	}

       printf("\ncount=%d\n",c);
}
