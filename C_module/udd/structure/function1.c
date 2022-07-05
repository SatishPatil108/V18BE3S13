#include<stdio.h>
#include<stdlib.h>
struct st
{
	int roll;
	char *name;
	float marks;
};

struct st*malloc_struct(void);
main()
{
	struct st *p;

	p=malloc_struct();
	printf("enter roll\n");
	scanf("%d",&p->roll);

	printf("enter name\n");
	scanf("%s",p->name);

	printf("enter the marks\n");
	scanf("%f",&p->marks);

	printf("%d %s %f\n",p->roll,p->name,p->marks);
}

struct st *malloc_struct(void)
{
	struct st *p;
	p=malloc(sizeof(struct st));
	p->name=malloc(10);
	return p;
}
