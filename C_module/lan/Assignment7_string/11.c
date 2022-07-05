#include<stdio.h>
main()
{

	int i,j,k,c=0;

	char s[20];

	printf("enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j+1]!='\0'||s[j];j++)      
		{          
			if(s[i]==s[j])
			{
				for(k=j;s[k+1]!='\0';k++)			  
				{
					s[k]=s[k+1];
				}
				s[k]='\0';       
				j--;
			}
		}
	}
	printf("%s\n",s);

}

