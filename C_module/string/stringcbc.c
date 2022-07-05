#include<stdio.h>
main()
{
	int i;

	char s[10];

	printf("enter string\n");
	scanf("%s",s);

//	for(i=0;i<10;i++)   if print less than string it gives garbage

//          for(i=0;s[i];i++)

         for(i=0;s[i]!='\0';i++)
		printf("%c ",s[i]);
	printf("\n");


}
