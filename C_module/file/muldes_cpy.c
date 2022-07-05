#include<stdio.h>
main(int argc,char **argv)
{
	int i;
	char ch;
	FILE *fs,*fd;
	if(argc<3)
	{
		printf("Usage:./my_cp sf d1,d2,d3..\n");
		return;
	}

	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("file not present\n");
		return;
	}

	for(i=2;i<argc;i++)
	{
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fs))!=-1)
			fputc(ch,fd);

		rewind(fs);
	}
}
