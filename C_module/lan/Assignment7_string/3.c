#include<stdio.h>
main()
{

	int i,c;

	char s[10],ch;

	printf("enter the string\n");
	scanf("%s",s);

      printf("enter the character \n");
      scanf(" %c",&ch);

	for(i=0,c=0;s[i];i++)
	  {

            if(s[i]==ch)
             c++;
         }
 

 


	printf("ch=%c c=%d\n",ch,c);


}

