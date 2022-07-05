#include<stdio.h>
main()
{
    char s[25];
    int i;

    printf("Enter the string\n");
    gets(s);

    for(i=0;s[i];i++);
 
    for(i=i-1;i>=0;i--) 
    printf("%c",s[i]);
 
    printf("\n") ;
 
}
