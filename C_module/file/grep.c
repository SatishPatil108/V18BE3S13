#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
       char s[100];
	FILE *fp;
	if(argc!=3)
	{
	printf("Usage:./my_grep string fname\n");
        return;
	}

	fp=fopen(argv[2],"r");
	if(fp==0)
	{
	printf("file not present\n");
	return;
	}

	while(fgets(s,100,fp))
       {
	if(strstr(s,argv[1]))
	printf("%s",s);
       }
}



