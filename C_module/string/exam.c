#include<stdio.h>
main()
{
    char s[10],s1[10];
    int i,j;
    printf("Enter the String\n");
    gets(s);

    for(i=0;s[i];i++);
   
    for(j=0,i=i-1;i>=0;i--,j++)
    s1[j]=s[i];
    
    
    s1[j]='\0';


   puts(s1);
}



