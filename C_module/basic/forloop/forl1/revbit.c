#include<stdio.h>
main()
{
	int i,j,m,n,num;

	printf("Enter the no:\n");
	scanf("%d",&num);

	printf("Before num=%d\n",num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");


	///////////////////////////////////

	for(i=0,j=31;i<j;i++,j--)
	{

		m=num>>i&1;
		n=num>>j&1;

		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	/////////////////////////////////

	printf("After num=%d\n",num);
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");


}

