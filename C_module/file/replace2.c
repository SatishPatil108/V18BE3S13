#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{ 
	char s[20],s1[20];
        char *p;
	FILE *fp;
	int c,l2,l1,m,n;
	if(argc!=4)
	{
		printf("Usage:./a.out fname string\n");
		return;
	}

	l1=strlen(argv[2]);
	printf("l1=%d\n",l1);

	l2=strlen(argv[3]);
	printf("l2=%d\n",l2);

	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
	printf("File Not present\n");
	return;
	}
	c=0;
	while(fscanf(fp,"%s",s)!=-1) 
	{
		if(strcmp(s,argv[2])==0)
                {     
		      
                      c++;  
                      m=l1-l2;
                      fseek(fp,-l1,SEEK_CUR);
 	              fprintf(fp,"%s",argv[3]);
                }		

	}
}
