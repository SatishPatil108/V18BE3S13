//reverse binary

#include<stdio.h>
void print_binary(int);
main()
{
	int num;
	printf("enter the given number\n");
	scanf("%d",&num);

	print_binary(num);
	printf("\n");

}

void print_binary(int n)
{
	static int pos=0;
	if(pos<=31)
	{ 
		printf("%d",n>>pos&1);
		pos++;
		print_binary(n);
	}
}
