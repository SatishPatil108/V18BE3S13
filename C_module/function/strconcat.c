#include<stdio.h>
void my_strcat(char *,const char *);
main()
{

	char f[20],s[10];
	printf("enter the first string\n");
	scanf("%s",f);
	printf("enter the second string\n");
	scanf("%s",s);
	printf("Before...f=%s s=%s\n",f,s);
	my_strcat(f,s);
	printf("After...f=%s s=%s\n",f,s);

	printf("\n");
}

void my_strcat(char *p,const char *q) 
  {
  int i,j;
  for(i=0;p[i];i++);
  for(j=0;p[j];i++,j++)
  p[i]=q[j];

  p[i]=q[j];


  }
/*
void my_strcat(char *p,const char *q)
{
	while(*p)
	
             
		*++p=*q++;

		*p='\0';
	

}
*/

