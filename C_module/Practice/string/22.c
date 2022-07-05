#include<stdio.h>

int main(void)

{

	int marks;

	char name[50];

	printf("Enter marks : "); 

	scanf("%d",&marks);

	printf("Enter name : "); 

	scanf("%s",name);


         printf("%s=%d\n",name,marks);
	return 0;

}
