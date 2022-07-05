#include<stdio.h>
main(int argc,char **argv)
{
	int c;
	char ch;
	FILE *fp;

	if(argc!=3)
	{
		printf("Usage:./a.out fname\n");
		return;
	}


	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}

	c=0;
	while((ch=fgetc(fp))!=-1)
        if(ch==argv[2][0])
	c++;

	printf("count=%d\n",c);
}

