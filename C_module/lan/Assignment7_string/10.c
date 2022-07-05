#include<stdio.h>
int main()
{

	char s[50];

	int i,j;

	printf("enter the string\n");
        scanf(" %[^\n]",s);

	for(i=0;s[i];i++)
          {
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];

			i--;
		}
          } 
        puts(s);          
}
