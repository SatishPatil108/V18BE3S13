#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
main()
{       int i;
	struct st s[5];
	for(i=0;i<5;i++)
	{
		printf("enter the rollno\n");
		scanf("%d",&s[i].rollno);

		printf("Enter the name\n");
		scanf("%s",s[i].name);

		printf("enter the marks\n");
		scanf("%f",&s[i].marks);
	}

 printf("--------------------------------------------\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
}

