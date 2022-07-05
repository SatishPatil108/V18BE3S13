#include<stdio.h>
main()
{
	FILE *fp;
	char s[20];
	printf("enterthe file name\n");
        scanf("%s",s);
        fp=fopen(s,"r");

       // fp=fopen("data.c","r");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}
	else
		printf("file is present\n");

}
