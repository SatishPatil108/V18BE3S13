#include<stdio.h>
main()
{

	int i,j,k;


	char s[10],d[10],ch;

	printf("enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
		d[i]=s[i];
		d[i]='\0';
		printf("%s\n",d);

	for(i=0;s[i];i++);

	for(j=0,i=i-1;i>j;i--,j++)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;
          
	}	

printf("%s\n",s);
     for(i=0;s[i];i++)
       {
	if(d[i]!=s[i])
         break;
       }
    
     if(s[i]==d[i])
 	printf("pallindrome\n");
     else
	printf("not\n");

}




