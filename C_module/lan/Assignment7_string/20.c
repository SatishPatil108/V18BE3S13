//20
#include<stdio.h>
int main()
{
char s1[30],s2[30],s3[30];
int i,j;
printf("Enter the 1st string..\n");
gets(s1);
printf("Enter the 2nd string..\n");
gets(s2);
for(i=0;s1[i];i++)
s3[i]=s1[i];

s3[i]=' ';
i++;

for(j=0;s2[j]!=' ';j++);
j++;

for(i,j;s2[j];i++,j++)
s3[i]=s2[j];

s3[i]='\0';

printf("Destination string is..\n");
puts(s3);
}
