#include<stdio.h>
#include<stdlib.h>
struct st 
{
	int roll;
	char *name;
	float marks;
};

void malloc_struct1(struct st**);
main()
{
        struct st *p;

	malloc_struct1(&p);
	printf("enter roll\n");
	scanf("%d",&p->roll);

	printf("enter name\n");
	scanf("%s",p->name);

	printf("enter marks\n");
	scanf("%f",&p->marks);

	printf("%d %s %f\n",p->roll,p->name,p->marks);
}

void malloc_struct1(struct st **q)
{
	*q=malloc(sizeof(struct st));
	(*q)->name=malloc(10);
}
