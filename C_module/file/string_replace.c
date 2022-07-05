#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{ 
	char s[20],s1[20];
	FILE *fp;
	int c,l;
	if(argc!=4)
	{
		printf("Usage:./a.out fname string\n");
		return;
	}
      strcpy(s1,argv[3]);
      printf("%s\n",s1);

	l=strlen(argv[3]);
        printf("l=%d\n",l);

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
                fseek(fp,-l,SEEK_CUR);
		fprintf(fp,"%s",s1);
                }
                
	}
 printf("c=%d\n",c);
}
