#include<stdio.h>
#include<string.h>
main()
{

	int i,ele,j;

	char s[5][10],t[10];

	ele=sizeof(s)/sizeof(s[0]);
        printf("ele=%d\n",ele);
	printf("enter the five string\n");
	for(i=0;i<ele;i++)
		scanf("%s",s[i]);
        printf("----------------------------\n");
	for(i=0;i<ele;i++)
		printf("%s\n",s[i]);


	////////////////////////////////////////

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(s[j],s[j+1])==1)
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
		}
	}

	printf("------------------------------------\n");
	
         for(i=0;i<ele;i++)
         printf("%s\n",s[i]);

}

