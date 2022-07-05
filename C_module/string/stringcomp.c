#include<stdio.h>
main()
{
        char s[10],s1[10];
	int i;
	printf("enter the string\n");
	scanf("%s %s",s,s1);

	for(i=0;s[i];i++)
	{ 
		if(s[i]!=s1[i])
			break;
	}

	if(s[i]==s1[i])
		printf("equal\n");
	else
		printf("not equal\n");

}
