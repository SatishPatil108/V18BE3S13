#include<stdio.h>
int main()
{
    char s1[30],s2[30],s3[30];
    int i,j;

    printf("Enter 1st string\n");
    scanf("%s",s1);

    printf("Enter 2nd string\n");
    scanf(" %[^\n]",s2);

    printf("Before-----------------------------------------------------\n");
    printf("1st string=%s\n",s1);
    printf("2nd string=%s\n",s2);

    for(i=0;s1[i];i++)
    s3[i]=s1[i];

    s3[i++]=' ';

    for(j=0;s2[j]!=' ';j++);//dummy loop
    j++;

    for( ;s2[j];j++,i++)
    s3[i]=s2[j];
    
    s3[i]=s2[j];// add \0

    printf("After------------------------------------------------------\n");
    printf("1st string=%s\n",s1);
    printf("2nd string=%s\n",s2);
    printf("Destination string=%s\n",s3);
}


    
