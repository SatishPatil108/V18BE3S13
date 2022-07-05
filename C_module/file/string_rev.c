#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	char s[10],s1[10],ch;
	int i,j,l;

	FILE *fp;

	if(argc!=3)
	{
		printf("Usage:./a.out fname string\n");
		return;
	}

	strcpy(s1,argv[2]);

	for(i=0;s1[i];i++);
	for(j=0,i=i-1;i>j;i--,j++)
	{
		ch=s1[j];
		s1[j]=s1[i];
		s1[i]=ch;
	}

	l=strlen(s1);
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}

	while(fscanf(fp,"%s",s)!=-1)
	{
		if(strcmp(s,argv[2])==0)
		{
			fseek(fp,-l,SEEK_CUR);
			fprintf(fp,"%s",s1);
		}
	}

}



