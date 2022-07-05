#include<stdio.h>
main(int argc,char **argv)
{
	char ch;
	int p,l;
	FILE *fs,*fd; 

	char j[100];

	if(argc!=4) 
	{
		printf("Usage:./a.out fname linenumber fname\n");
		return;
	}

	fs=fopen(argv[1],"r");
        fd=fopen(argv[3],"w");
	if(fs==0)
	{
		printf("File Not found\n");
		return;
	}

	l=atoi(argv[2]);
	p=0;
	while(fgets(j,100,fs))
	{ 
		p++;
		if(p!=l)
		{
			fputs(j,fd);
		}
	}



}


