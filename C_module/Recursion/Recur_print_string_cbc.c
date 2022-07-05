#include<stdio.h>
void print(char*);
main()
{
	char s[]="satish";
	print(s);
	printf("\n");
}

void print(char *p)
{
	if(*p)
	{
		
        // 	print(p+1);
//	       print(++p);
          	printf("%c",*p);
        	print(p+1);
	}
}


