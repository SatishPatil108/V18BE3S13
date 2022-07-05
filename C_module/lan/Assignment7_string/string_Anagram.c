#include<stdio.h>
#include<string.h>
void my_1stringAsending(char *s1)
{
   int i,j;
   char ch;
   for(i=0;s1[i];i++)
      {
         for(j=i+1;s1[j];j++)
          {
            if(s1[i]>s1[j])
            {
               ch=s1[i];
               s1[i]=s1[j];
               s1[j]=ch;
            }
          }
      }
      printf("1st New String=%s\n",s1);//1st String Asending
}

void my_2stringAsending(char *s2)
{
    int i,m,n,c,l;
    char ch;
    for(i=0;s2[i];i++);
    c=strlen(s2);

    while(i>=0)    
    {
        i--;
        l=i;
        while(s2[i]!=' ' && i>0) 
        i--;

        s2[i]==' '?m=i+1:(m=i);
        for(m;s2[m]!=' ' && m!=l+1;m++)
        {
            for(n=m+1;s2[n]!=' ' && n!=l+1;n++)
            {
              if(s2[m]>s2[n])
              {
                 ch=s2[m];
                 s2[m]=s2[n];
                 s2[n]=ch;
               } 
            }
        }
    }
    s2[c]='\0';

    printf("2nd New String=%s\n",s2);// 2nd string Asending order
 }

int my_strstr(char *s1,char *s2)
{
   int i,j;
   for(i=0;s2[i];i++)// strstr
   {
       if(s2[i]==s1[0])
       {
           for(j=1;s1[j];j++)
           {
               if(s2[i+j]!=s1[j])
                   break;
           }

          if(s1[j]=='\0')
           {
              return 1;
           }
       }
   }
   return 0;
}

int main()
{
    int c;
    char s1[30],s2[100],ch;
    printf("Enter the 1st String\n");
    scanf(" %[^\n]",s1);

    printf("Enter the 2nd String\n");
    scanf(" %[^\n]",s2);
    printf("-------------------------------------------------------\n");

    my_1stringAsending(s1);
    my_2stringAsending(s2);

    c=my_strstr(s1,s2);
    if(c==1)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");
}
