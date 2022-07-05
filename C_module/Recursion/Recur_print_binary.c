#include<stdio.h>
void print_binary(int);
main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);

print_binary(n);
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


