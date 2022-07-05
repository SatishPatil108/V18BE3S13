#include<stdio.h>
int main()
{
int i,j,c;
char s1[30],s2[30];
printf("Enter the 1st string..\n");
scanf(" %[^\n]",s1);
printf("Enter the 2nd string..\n");
scanf(" %[^\n]",s2);

for(i=0;s1[i];i++)
{
if(s1[i]==' ')
continue;

for(j=0,c=0;s2[j];j++)
{
if(s2[j]==' ')
continue;
if(s1[i]==s2[j])
c++;
}
if(c==1 || c==2 || c==3)
continue;
else
break;
}

if(s1[i]=='\0')
printf("Anagram..\n");
else
printf("Not Anagram..\n");
}
