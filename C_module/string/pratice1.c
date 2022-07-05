#include<stdio.h>
main()
{
    char s[20],ch;
    int i,j;

    printf("enter the string\n");
    gets(s);
 
    printf("Enter the character\n");
    scanf(" %c",&ch);

    for(i=0;s[i];i++) 
    {
        if(s[i]==ch)
        {
            for(j=i;s[j];j++)
            {
                s[j]=s[j+1];

            }
            i--;
        }
    }
    puts(s);

}


