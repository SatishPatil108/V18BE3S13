#include<stdio.h>
#include<string.h>
main(int argc, char **argv)
{
	int c,c1;
	FILE *fg;
        char ch;       
        
 
	if(argc!=3)
	{
	printf("Usage:./my_grep string fname\n");
	return;
	}

	fg=fopen(argv[2],"r");
	if(fg==0)
	{
 	printf("file Not present\n");
	return;
	}

	c=0;
	c1=1;
	while((ch=fgetc(fg))!=-1)
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
        char s[c1];
        printf("%d\n",c1);
        rewind(fg);

	while(fgets(s,c1,fg))
	{
	if(strstr(s,argv[1]))
	printf("%s",s);
        }
}
