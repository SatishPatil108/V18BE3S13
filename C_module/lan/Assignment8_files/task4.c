#include<stdio.h>
main(int argc,char ** argv)
{

	FILE *fp,*fd;

	char ch;

	if(argc!=3)
	{
		printf("Usage:;/a.out finame finame\n");
		return;
	}

	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File not found\n");
		return;
	}

	fd=fopen(argv[2],"w+");

	while((ch=fgetc(fp))!=-1)
	{
		if(ch=='<')
		{
			while((ch=fgetc(fp))!='>')
                        fputc(ch,fd);
                        
		        fputc('\n',fd);
		}
	}
       

}
