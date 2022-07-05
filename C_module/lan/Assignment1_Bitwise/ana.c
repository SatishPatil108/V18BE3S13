#include<stdio.h>
#include<string.h>
void ass(char *);
void cmp(char *,char *);
void main()
{
    char a[]="osama",b[]="maosa",ch;
    int i=0,j=0;
    for(i=0;a[i];i++);
    for(j=0;b[j];j++);
    if(i!=j)
    {
        printf("String not  anagram\n");
        return;
    }
    else
    {
        ass(a);
        ass(b);
        cmp(a,b);
    }
}
void ass(char *a)
{
    char *b,ch;
    int i,j;
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[j];j++)
        {
            if(a[i]>a[j])
            {
                ch=a[i];
                a[i]=a[j];
                a[j]=ch;
            }
        }
    }
    printf("%s\n",a);
}
void cmp(char *a,char *b)
{
    if(strcmp(a,b)==0)
        printf("ANAGRAM\n");
    else
        printf("NOT anagram\n");
}
