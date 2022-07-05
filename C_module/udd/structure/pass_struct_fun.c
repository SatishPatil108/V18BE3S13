#include<stdio.h>
#include<stdlib.h>
struct st
{
	int i;
	char ch;
	float f;
};

void print(int ,char,float);
void print1(struct st);
void print2(struct st *p);

main()
{
	struct st o1={10,'a',22.5};
	print(o1.i,o1.ch,o1.f);
	print1(o1);
	print2(&o1);
}
void print(int i,char ch,float f)
{
	printf("%d %c %f\n",i,ch,f);
}

void print1(struct st o2)
{
	printf("%d %c %f\n",o2.i,o2.ch,o2.f);
}
void print2(struct st *p)
{
	printf("%d %c %f\n",p->i,p->ch,p->f);
}

