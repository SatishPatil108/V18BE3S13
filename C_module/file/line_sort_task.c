#include<stdio.h>
#include<string.h>
main(int argc, char **argv)
{
	char ch;
	char b[3][20];


	int c,c1,i,j,ele;
	ele=sizeof(b)/sizeof(b[0]);


	FILE *fs,*fd;

	if(argc!=2)
	{
		printf("Usage:./a.out fname fname\n");
		return;
	}

	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("File Not Present\n");
		return; 
	}

	c=0;
	c1=0; 
	while((ch=fgetc(fs))!=-1)
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
	rewind(fs);

	for(i=0;i<ele;i++)
	{
		fscanf(fs,"%s",b[i]);
	}
	for(i=0;i<ele;i++)
	{
		printf("%s\n",b[i]);
	}
	////////////////////////////////////////////////////////////////////


	printf("----------------------------------------------------\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strlen(b[j])>strlen(b[j+1]))
			{
				strcpy(t,b[j]); 
				strcpy(b[j],b[j+1]);
				strcpy(b[j+1],t);
			}
		}
	}    
	for(i=0;i<ele;i++)
	{
		printf("%s\n",b[i]);
	}
}













