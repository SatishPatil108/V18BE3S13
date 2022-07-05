#include<stdio.h>
main()
{

	int i,j;
	char s[10],d[10];

	printf("enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++);  // for i=5

	for(j=0,i=i-1;i>=0;j++,i--)
		d[j]=s[i];

	d[j]='\0';

	printf("s=%s d=%s\n",s,d);

}
