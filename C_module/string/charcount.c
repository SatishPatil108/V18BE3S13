#include<stdio.h>
main()
{

	int i,c;
	char s[10],ch;

	printf("enter the string\n ");
	scanf("%s",s);


	printf("enter the char\n");
	scanf(" %c",&ch);
/////////////////////////////////////////

	for(i=0,c=0;s[i];i++)
		if(s[i]==ch)
			c++;
/////////////////////////////////////////
	printf("c=%d\n",c);


}
