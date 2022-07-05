#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};


main()
{
	struct st *p;
	p=malloc(sizeof(struct st));

	printf("enter the rollno\n");
	scanf("%d",&p->rollno);

	printf("enter the name\n");
	scanf("%s",p->name);

	printf("enter the marks\n");
	scanf("%f",&p->marks);

 printf("%d %s %f\n",p->rollno,p->name,p->marks);
}

