#include<stdio.h>
int my_strcharcount(const char *,char ch);
main()
{
	int i;
	char s[10],ch;

	printf("enter the string\n");
	scanf("%s",s);

	printf("enter the char\n");
	scanf(" %c",&ch);

	i=my_strcharcount(s,ch);
	printf("i=%d\n",i);

}

int my_strcharcount(const char *p,char ch)
{
	int i,c;
         
	for(i=0,c=0;p[i];i++)
           {
        	if(p[i]==ch)
                 {
	          c++;
		 }
	  }
   return c; 

}
 


