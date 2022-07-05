#include<stdio.h>
void my_strupper(char *);
main()
{
	char s[10];

	printf("enter the string\n");
	scanf("%s",s);

	printf("Before..s=%s\n",s);

	my_strupper(s);

	printf("After ...s=%s\n",s);

}

void my_strupper(char *p)
{
	int i;
	for(i=0;p[i];i++)
	
		if(p[i]>='a' &&  p[i]<='z')
			p[i]=p[i]-32;
	

}
