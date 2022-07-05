#include<stdio.h>
main()
{
    int i,j;
    char s[10];
    scanf("%s",s);

    for(i=0;s[i];i++);

    for(j=0,i=i-1;j<i;i--,j++)
    {
        if(s[j]==s[i])
            continue;

        else
            break;
    }
    if(i==j)
        printf("palindrome\n");
    else
        printf("Not\n");
}

