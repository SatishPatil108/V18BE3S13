#include<stdio.h>
#include<stdlib.h>
struct Date
{
	int date;
	int month;
	int year;
};

struct st
{
	int rollno;
	char name[10];
	float marks;
	struct Date dob;
	struct Date doj;
};

main()
{
	struct st s1;

	s1.dob.date=10;
	s1.dob.month=4;
	s1.dob.year=1994;

	s1.doj.date=13;
	s1.doj.month=7;
	s1.doj.year=2018;

	printf("%d %d %d\n",s1.dob.date,s1.dob.month,s1.dob.year);

	printf("%d %d %d\n",s1.doj.date,s1.doj.month,s1.doj.year);
}
