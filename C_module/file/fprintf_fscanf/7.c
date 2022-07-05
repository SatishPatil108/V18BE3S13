#include<stdio.h>
struct st
{
	int roll;
	char name[10];
	float marks;
};

main()
{
  //	struct st s1;
	struct st s1={10,"abcd",22.5};

	FILE *fp;
	fp=fopen("data","w");
        fprintf(fp,"%d %s %f",s1.roll,s1.name,s1.marks);
}

