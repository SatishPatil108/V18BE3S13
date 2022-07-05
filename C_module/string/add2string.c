#include<stdio.h>
main()
{
	int i,j;

	char f[20],s[10];

	printf("enter the 1st string\n");
	scanf("%s",f);

	printf("enter the 2nd string\n");
	scanf("%s",s);

	printf("before f=%s s=%s\n",f,s);
	///////////////////////////////

	for(i=0;f[i];i++);   

	for(j=0;s[j];j++,i++)
		f[i]=s[j];

	f[i]=s[j];
        ////////////////////////////////
	printf("after f=%s s=%s\n",f,s);


}

