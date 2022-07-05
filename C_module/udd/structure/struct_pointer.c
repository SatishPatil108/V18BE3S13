#include<stdio.h>
struct st
{
 int i;
 char ch;
 float f;
};

main()
{
 struct st s1={10,'P',22.5},*p;
 
 p=&s1; 
 printf("%d %c %f\n",p->i,p->ch,p->f);

 printf("%d %c %f\n",s1.i,s1.ch,s1.f);
}
 


