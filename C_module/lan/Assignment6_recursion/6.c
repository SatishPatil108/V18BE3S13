#include<stdio.h>
char word(char*);
main()
{
	int n;
	printf("enter the ele\n");
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	word(s);
        printf("\n");
}

char word(char*p)
{
	if(*p=='\0')
		return;
	else
	{
		switch(*p)
		{
			case 48: printf("zero ");
				 break;
			case 49: printf("one ");
				 break;
			case 50: printf("two ");
				 break;
			case 51: printf("three ");
				 break;
		        case 52: printf("four ");
				 break;
			case 53: printf("five ");
				 break;
			case 54: printf("six ");
				 break;
			case 55: printf("seven ");
				 break;
		        case 56: printf("eight ");
				 break;
			case 57: printf("nine ");
				 break;
		}
		word(++p);
	}

}
