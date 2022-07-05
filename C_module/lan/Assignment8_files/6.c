#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	char s[20],s1[20];
	int i,j,l;
	char ch;

	FILE *fp;

	if(argc=!3)
	{
		printf("Usage:./a.out finame string\n");
		return;
	}

	strcpy(s1,argv[2]);

	for(i=0;s1[i];i++);
	for(j=0,i=i-1;i>j;j++,i--)
	{
		ch=s1[j];
		s1[j]=s1[i];
		s1[i]=ch;
	}


	l=strlen(s1);

	fp=fopen(argv[1],"r+");

	while(fscanf(fp,"%s",s)!=-1)
	{
		if(strcmp(s,argv[2])==0)
		{
		 fseek(fp,-l,1);
       		 fprintf(fp,"%s",s1);
		}
	}
}
