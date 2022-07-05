#include<stdio.h>
main()
{
	char ch;
	FILE *fp;

	fp=fopen("data","r");

//	printf("%d\n",sizeof(*fp));

	printf("1) %u %d\n",fp,ftell(fp));

	ch=fgetc(fp);
	printf("2) %u %d\n",fp,ftell(fp));

	ch=fgetc(fp);
	printf("3) %u %d\n",fp,ftell(fp));
}
