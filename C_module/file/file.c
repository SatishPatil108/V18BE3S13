#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fd,*fs;
	char s[20],ch;
         
	if(argc!=3)
	{
		printf("Usage:./a.out file name\n");
		return;
	}

        fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("file not present\n");
		return;
	}
	else
              {
		printf("file is present\n");
              }
  
                 //fputc(argv[2][0],fd);  
        fd=fopen(argv[2],"a+");
            while((ch=fgetc(fs))!=-1)
                fputc(ch,fd);
    
}
