/*hptr globally*/
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[10];
	float marks;
	struct student *next;
}SL;

void display(void);
void add_b(void);

SL *hptr=0;
main()
{
	char ch;

	do
	{
		add_b();
		printf("Do you want to add again\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));

	display();
}
void add_b()
{
	SL *temp=malloc(sizeof(SL));
	printf("Enter roll\n");
	scanf("%d",&temp->roll);
	printf("Enter Name\n");
	scanf("%s",temp->name);
	printf("enter marks\n");
	scanf("%f",&temp->marks);

	temp->next=hptr;
	hptr=temp;
}

void display()
{
	SL *temp=hptr;
	while(temp)
	{
		printf("%d %s %f\n",temp->roll,temp->name,temp->marks);
		temp=temp->next;
	}
}


