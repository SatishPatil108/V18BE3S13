#include<stdio.h>
int main()
{
    char f[15],s[15];
    int i,j;
    printf("Enter the two strings\n");
    scanf("%s%s",f,s);

    for(i=0;f[i];i++)
        if(f[i]!=s[i])   
         break;

    if(f[i]==s[i])
        printf("Equal\n");

    else
        printf("Not Equal\n");
}
