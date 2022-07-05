#include<stdio.h>
main()
{

	int a[10],ele,i,l,sl;



	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the element...\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("\n");

	/////////////////////////////////////



	for(i=0;i<ele;i++)
	{
		if(a[0]>a[1])
		{
			l=a[0];
			sl=a[1];
		} 
		else
		{
			l=a[1];
			sl=a[0];
		}


		for(i=2;i<ele;i++)
		{
			if(a[i]>l)
			{
				sl=l;
				l=a[i];
			}
			else if(a[i]>sl)
			{
				sl=a[i];
			}
          
                 
		}
	}
     printf("%d %d\n",l,sl);
}
