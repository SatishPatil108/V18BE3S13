#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	char s1[50],s2[50],t[50];
	char s[6][100]; 

	int c,ele,i,j,l;

	if(argc!=2)
	{
		printf("Usage:./a.out fname char\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File Not Present\n");
		return;
	}

	/*	while(fscanf(fp,"%s",s1)!=-1)
		{  
		printf("%s",s1);
		} 
	 */
l:	while((ch=fgetc(fp))!=-1)
	{    
		if(ftell(fp)==1)
		{ 
			fseek(fp,-1,SEEK_CUR);
			ch=ch&~(32);
			fputc(ch,fp);
			goto l;
		}
		if(ch==' ' || ch=='\n')    
		{
			ch=fgetc(fp);
			fseek(fp,-1,SEEK_CUR);
			ch=ch&~(32);
			fputc(ch,fp);
		}
	}
}



