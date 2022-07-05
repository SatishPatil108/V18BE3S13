#include<stdio.h>
main()
{

	char s[10],ch;
	int i,j,pos; 

	printf("enter the string\n");
	scanf("%s",s);

	printf("enter the insert character \n");
	scanf(" %c",&ch);

	printf("enter the pos\n");
	scanf("%d",&pos);

	printf("before  s=%s\n",s);


	for(i=0;s[i];i++);
	s[i+1]='\0';

	for( ;i>=pos;i--)
	{  
		s[i]=s[i-1];
	}

	s[pos]=ch;


	printf("after s=%s\n",s);
}

