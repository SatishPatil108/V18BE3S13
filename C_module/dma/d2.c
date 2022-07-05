#include<stdio.h>
#include<stdlib.h>
main()
{

	int i;
	int *p;

        p=malloc(sizeof(int)*5);

       // int *const p=malloc(sizeof(int)*5);
	printf("enter the numbers\n");
	for(i=0;i<5;i++)
		scanf("%d",&p[i]);


	for(i=0;i<5;i++)
		printf("%d ",p[i]);

	printf("\n");
}
