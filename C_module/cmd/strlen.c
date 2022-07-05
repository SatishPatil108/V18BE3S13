#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
	int l;
	if(argc!=2)
	{
		printf("usage:./a.out string\n");
		return;
	}
	l=strlen(argv[1]);
	printf("l=%d\n",l);

}
