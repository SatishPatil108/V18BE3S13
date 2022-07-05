#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
main()
{
	struct st s1;

	printf("enter the rollno\n");
	scanf("%d",&s1.rollno);

	printf("Enter the name\n");
	scanf("%s",s1.name);

	printf("enter the marks\n");
	scanf("%f",&s1.marks);

	printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
}

