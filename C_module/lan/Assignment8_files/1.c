#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	char d[3][20];
	int c,c1,ele,i;
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
	c=0;
	while((ch=fgetc(fp))!=-1)
	{      
                if(ch=='\n')
               { 
		fseek(fp,0,SEEK_CUR);
               }
                else
               {         
		ch=ch^(32);
                fseek(fp,-1,SEEK_CUR);
                fputc(ch,fp);
		}
        }
  printf("%d\n",c);
}



























		/*	{
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

		for(i=0;d[i];i++)  
		{
		if(d[i]>='a' && d[i]<='z')
		d[i]=d[i]-32;

		}

		printf("%s\n",d[i]);
		}
		 */
