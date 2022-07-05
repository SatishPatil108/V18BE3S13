#include<stdio.h>
void my_strrev(char*,int);
main()
{      int i;
	char s[20];
	printf("enter the string\n");
	scanf("%s",s);
	printf("before...s=%s\n",s);
        for(i=0;s[i];i++);
        i--;
        my_strrev(s,i);
	printf("After....s=%s\n",s);
}
void my_strrev(char *p,int i)
{
     static int j=0;
     char ch;
      
     ch=p[j];
     p[j]=p[i];
     p[i]=ch;
     j++;
     i--;
    if(j<i)
     my_strrev(p,i);
}
/*
void my_strrev(char *p)
{
	int i,j;
	char ch;
	for(i=0;p[i];i++);
	{
		for(j=0,i=i-1;i>j;j++,i--)
		{
		
			
				ch=p[j];
				p[j]=p[i];
				p[i]=ch;
			
		}
	}
}*/
