#include<stdio.h>
main()
{
	int i,j;

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("i=%d j=%d\n",i,j);

		printf("...........................\n");
	}
	printf("after i=%d j=%d \n",i,j);


}
