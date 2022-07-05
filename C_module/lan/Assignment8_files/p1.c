#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	char d[3][100];
	int c,c1,ele,i,j;
	ele=sizeof(d)/sizeof(d[0]);

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
////////////////////////////////////////////////////////////////////////////
	while((ch=fgetc(fp))!=-1)
	{      
		if(ch=='\n')
		{ 
			fseek(fp,0,SEEK_CUR);
		}
		else
		{         
			ch=ch&~(32);
			fseek(fp,-1,SEEK_CUR);
			fputc(ch,fp);
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////
/*
   c=0;
   c1=0;

   while((ch=fgetc(fp))!=-1)
   {
   c++;
   if(ch=='\n')
   {
   if(c>c1)
   c1=c;
   c=0;
   }
   }
   printf("c1=%d\n",c1);
   char t[50];
/////////////////////////////////////////////////////////////
rewind(fp);
for(i=0;i<ele;i++)
{
fscanf(fp,"%s",d[i]);
}
for(i=0;i<ele;i++)
{
printf("%s\n",d[i]);
}
printf("-------------------------------------------------------\n");

for(i=0;i<ele-1;i++)  
{
for(j=0;j<ele-1-i;j++)  
{
if(d[i][j]>='a' && d[i][j]<='z')	
d[i][j]=d[i][j]-(32);
}
}

fprintf(fp,"%s",d[i][j]);
}
 */
