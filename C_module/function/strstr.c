#include<stdio.h>
int my_strstr(char *,char*);
main()
{
	int l;
	char m[20],s[10];

	printf("enter the main string\n");
	scanf("%s",m);
        
	printf("enter the sub string\n");
	scanf("%s",s);

        
	l=my_strstr(m,s);

	if(l==1)
		printf(" %u = present\n");
	else
		printf("not\n");

}

int my_strstr(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{ 
				if(q[j]!=p[i+j])
					break;
			}

			if(q[j]=='\0') 
			{
				return 1;
			}
		}
	}
	return 0;
}








