#include<stdio.h>
int main()
{

	char s[20];
	int i,j,c;

	printf("enter the string\n");
        scanf(" %[^\n]",s);

	for(i=0;s[i];i++)
	{
		for(j=0,c=0;s[j];j++)
                   {
			if(s[i]==s[j])
			{
				c++;
				if(i>j)
					break;
			}

                    }
		if(c>1)
			printf("%c.....times %d\n",s[i],c);

        } 

}
