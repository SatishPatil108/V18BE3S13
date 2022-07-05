#include<stdio.h>
main()
{

	int i;

	char s[10];

	printf("enter the string\n");
	scanf("%s",s);

	printf("before s=%s\n",s);

	//////////////////////////////////

	for(i=0;s[i];i++)
		if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;

	//////////////////////////////////

	printf("after s=%s\n",s);

}
