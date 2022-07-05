#include<stdio.h>
main(int argc,char **argv)
 {    
        char ch;
	FILE *fs,*fd;
	char s[10];

	if(argc!=3)
	{
		printf("usage:./a.out sfile dfile\n");
		return;
	}

	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("file not present\n");
		return;
	}
	fd=fopen(argv[2],"w");
	while((ch=fgetc(fs))!=-1)
		fputc(ch,fd);
}
