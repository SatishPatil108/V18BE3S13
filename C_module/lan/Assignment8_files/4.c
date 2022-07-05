#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	char s[3][50],t[50];
        char s1[50],s2[50];

	int c,ele,i,j;
	ele=sizeof(s)/sizeof(s[0]);

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
	c=0;

	
/*	while(fscanf(fp,"%s",s1)!=-1)
       {  
        fprintf(fp,"%s",s2);
       } 
*/
	


       for(i=0;i<ele;i++)
       {
        fscanf(fp,"%s",s[i]);
       }
	

        for(i=0;i<ele;i++)
	{
		printf("%s\n",s[i]);
	}

	printf("-----------------------------------------------\n");

	for(i=0;i<ele-1;i++)    
	{ 
		for(j=0;j<ele-1-i;j++)
		{
			if(strlen(s[j])>strlen(s[j+1]))
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}


	for(i=0;i<ele;i++) 
		printf("%s\n",s[i]);

	printf("---------------------------------------------------\n"); 
}
////////////////////////////////////////////////////////////

	for(i=0;i<ele;i++)  
	{
		for(j=0;j<20;j++)
		{
		if(s[i][j]>='a' && s[i][j]<='z')
		s[i][j]=s[i][j]^(32);
 
                 else if(s[i][j]>='A' && s[i][j]<='z') 
                 s[i][j]=s[i][j]^(32);
		}
	}
	for(i=0;i<ele;i++)
        {
		printf("%s\n",s[i]);
        }
}

