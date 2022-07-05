#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	int i,c;
	char s[50];
		if(argc!=3)
		{
			printf("Usage:./a.out fname string\n") ;
			return;
		}

	fp=fopen(argv[1],"r");
	if(fp==0) 
	{
		printf("file not present\n");
		return;
	}

	c=0;
	while(fscanf(fp,"%s",s)!=-1)
	{
		if(strcmp(s,argv[2])==0)
			c++;
	}
	printf("count=%d\n",c);
}






