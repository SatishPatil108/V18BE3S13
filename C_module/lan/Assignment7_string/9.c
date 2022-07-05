#include<stdio.h>
main()
{

	int i,j;

	char s[10],ch;

	printf("enter the string\n");
	scanf("%s",s);

	printf("enter the charactor\n");
	scanf(" %c",&ch);


	printf(" before s=%s\n",s);

	for(i=0;s[i];i++)
	{

		if(s[i]==ch)
		{
			for(j=i;s[j];j++)            
				s[j]=s[j+1];

			i--;

		}

	}

        
	printf(" after s=%s\n",s);
}
