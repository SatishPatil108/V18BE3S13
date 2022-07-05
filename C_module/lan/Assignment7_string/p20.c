#include<stdio.h>
int main()
{
    int a,b;
    char s[20],m[30],n[30];
    printf("Enter the 1st string\n");
    scanf("%s",s);

    printf("Enter the 2nd string\n");
    scanf(" %[^\n]",m);

    printf("Before..............................\n");
    printf("1st string :%s\n",s);
    printf("2nd string :%s\n",m);
    printf("---------------------------------------------------\n");

    for(a=0;s[a];a++)
    n[a]=s[a];

    n[a++]=' ';

    for(b=0;m[b]!=' ';b++);//dummy loop

    b++;

    for( ;m[b];b++,a++)
    n[a]=m[b];

    n[a]=m[b];

    printf("After..............................\n");
    printf("1st string :%s\n",s);
    printf("2nd string :%s\n",m);
    
    printf("Destination string :%s\n",n);

}
