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
	int i;
	struct st *p[5];

	for(i=0;i<5;i++)
		p[i]=malloc(sizeof(struct st));

	for(i=0;i<5;i++)
	{
		printf("Enter rollno\n");
		scanf("%d",&p[i]->rollno);

		printf("Enter the name\n");
		scanf("%s",p[i]->name);

		printf("Enter the marks\n");
		scanf("%f",&p[i]->marks);
	}
	for(i=0;i<5;i++)
		printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
}
