#include<stdio.h>
main()
{
	int i,num;

	for(num=1;num<=500;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			break;
		}

		if(num==i)
		printf(" %d ",num);
               }
           printf(" \n");
}
