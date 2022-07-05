#include<stdio.h>
main()
{
    int i,j;
    char s[20],ch;
    printf("Enter the String\n");
    gets(s);
    puts(s);

    for(i=0;s[i];i++);

    for(j=0,i=i-1;i>j;i--,j++)
    {
        ch=s[j];
        s[j]=s[i];
        s[i]=ch;
    }
    puts(s);
}
