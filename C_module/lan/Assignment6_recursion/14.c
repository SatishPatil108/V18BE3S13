//binary print

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
	static int pos=31;
	if(pos>=0)
	{ 
		printf("%d",n>>pos&1);
		pos--;
		print_binary(n);
	}
}
