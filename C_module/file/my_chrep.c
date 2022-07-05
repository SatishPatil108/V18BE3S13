#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{

	FILE *fp;
	int i,c;
	char ch,*p;

	if(argc!=4) 
	{
		printf("Usage:./a.out fname char char\n");
		return;
	}

	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	} 
	c=0;
	while((ch=fgetc(fp))!=-1)
		c++;
	//////////////////////////////////////////////
	rewind(fp);
	p=malloc(c+1);
	//////////////////////////////////////////////
	i=0;
	while((ch=fgetc(fp))!=-1)
		p[i++]=ch;

	p[i]='\0';
	////////////////////////////////////////////////
	rewind(fp);

	for(i=0;p[i];i++)
	{
		if(p[i]==argv[2][0])
			p[i]=argv[3][0];
	}
	///////////////////////////////
//	for(i=0;p[i];i++)
//		fputc(p[i],fp);

		fputs(p,fp);

}
