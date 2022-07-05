#include<stdio.h>
char * my_strchr( char*,char);
main()
{   char *p;
    char s[20],ch;
    printf("Enter the string\n");
    scanf("%s",s);
   
    printf("Enter char\n");
    scanf(" %c",&ch);
    printf("%u\n",s);
    p=my_strchr(s,ch);
   if(p==0)
       printf("char not found\n");
      else
          printf("present %u %s \n",p,p);
}

char *my_strchr( char *q,char c)
{
    int i;
    for(i=0;q[i];i++)
    {
        if(q[i]==c)
            return q+i;

    }
        
     return 0;
    
    
 

}
     
