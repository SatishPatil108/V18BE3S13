//17
#include<stdio.h>
main()
{

	char s[20],m[20];
	int i,j,c;

	printf("enter the main string\n");
	scanf("%s",m);

	printf("enter the sub string\n");
	scanf("%s",s);

	for(i=0,c=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(s[j]!=m[i+j])
					break;
			}
			if(s[j]=='\0')
			{
				c++;
			}
              }
    }
       
           printf("%d\n",c);
}
