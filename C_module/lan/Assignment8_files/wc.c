#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	char s[20];
	int i,j,l,c,c1,r,w;
	char ch;

	FILE *fp;

	if(argc=!2)
	{
		printf("Usage:./a.out finame\n");
		return;
	}



	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
        l=0;
	c=0;
        w=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++; 
		if(ch=='\n')
		{
		        l++;
                }
                if(ch==' '|| ch=='\n')
                w++;
         
        }
	printf("line=%d word=%d charcount=%d ",l,w,c);
        puts(argv[1]);
       
}























/*while(fscanf(fp,"%s",s)!=-1)
  {
  if(strcmp(s,argv[2])==0)
  {
  fseek(fp,-l,1);
  fprintf(fp,"%s",s1);
  }
  }
 */

