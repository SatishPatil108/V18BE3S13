#include<stdio.h>
int main()
{

 char s[20],ch;
 int i,j,ele;

printf("enter the string\n");
scanf("%s",s);

ele=sizeof(s)/sizeof(s[0]);

printf("Before=%s\n",s);

for(i=0;s[i];i++)
{
  for(j=i+1;s[j];j++)
  {
      if(s[i]>s[j]) 
      {
        ch=s[j];
        s[j]=s[i];
        s[i]=ch;
      }
  }
}
        
printf("After=%s\n",s);
}
