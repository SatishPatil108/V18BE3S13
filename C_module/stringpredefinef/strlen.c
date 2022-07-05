#include<stdio.h>
#include<string.h>
main()
{

 int l;
char s[]="satish";

l=strlen(s+1);
printf("l=%d\n",l);

l=strlen("satish");
printf("l=%d\n",l);


printf("satish\n"+1);
printf("%d\n"+1,l);

printf("%p\n",s);
printf("%p\n","satish");
}
