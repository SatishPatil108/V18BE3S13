#include<stdio.h>
main(int argc,char **argv)
{
	int i,c;
        char ch;
	FILE *fp;
	if(argc!=4)
	{
		printf("Usage:./a.out fname char\n");
		return;
	}

	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}

	while((ch=fgetc(fp))!=-1)
	{
		if(ch==argv[2][0])
                {
                fseek(fp,-1,SEEK_CUR);
		fputc(argv[3][0],fp);
	        }
        } 
}


