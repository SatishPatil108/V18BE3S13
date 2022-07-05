#include<stdio.h>
void my_strrev(char *);
main()
{
	char s[10];

	printf("enter the string\n");
	scanf("%s",s);
       printf("before..s=%s\n",s);
	my_strrev(s);
       printf("after..s=%s\n",s);

//	printf("\n");

}

void my_strrev(char *p)
{
	int i,j;
	char ch;
	for(i=0;p[i];i++);
     {
 	for(i=i-1,j=0;i>j;i--,j++)
	{
		ch=p[j];
		p[j]=p[i];
		p[i]=ch;
	}
    }
}
