/* hptr locally */
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[10];
	float marks;
	struct student*next;
}SL;

void add_b(SL**);
void display(SL*);

main()
{
	char ch;
	SL *hptr;
	hptr=0;

	do
	{
		add_b(&hptr);
			printf("Do you want to add one more node\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));

	display(hptr);
}

void add_b(SL **ptr)
{
	SL *temp=malloc(sizeof(struct student));
	printf("Enter roll\n");
	scanf("%d",&temp->roll);

	printf("Enter name\n");
	scanf("%s",temp->name);

	printf("Enter marks\n");
	scanf("%f",&temp->marks);

	temp->next=*ptr;
	*ptr=temp;
}

void display(SL *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);

		ptr=ptr->next;
	}
}

