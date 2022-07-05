#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},i=200;

	for(i=0;i<5;i++)

		printf("%u\n",&a[i]);

	printf("&i=%u\n",&i);

       a[5]=500;
	printf("%d\n",a[5]);
	printf("i=%d\n",i);
}
