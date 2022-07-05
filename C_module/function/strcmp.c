#include<stdio.h>
int my_strcmp(const char *,const char *);
main()
{
	int i;
	char s[10],d[10];

	printf("enter the two string\n");
	scanf("%s%s",s,d);

	i=my_strcmp(s,d);

	printf("i=%d\n",i);

	if(i==0)
		printf("equal\n");
	else if(i==1)
		printf("1st string\n");
	else
		printf("2nd string\n");

}

int my_strcmp(const char *p,const char*q)
{

	int i;
	for(i=0;p[i];i++)
	{  
		if(p[i]!=q[i])
			break;
	}

	if(p[i]==q[i])
		return 0;
	else if(p[i]>q[i])
		return 1;
	else
		return -1;

}
