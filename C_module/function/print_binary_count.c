#include<stdio.h>
int print_binary(int);       //function declearation
main()
{

	int num,c;
	printf("enter the number...\n");
	scanf("%d",&num);

	c=print_binary(num);            // function calling,here  num is actual argument
	printf("\n c=%d\n",c);

}

int print_binary(int n)        // function defination, here n is formal argument
{                         
	int pos,c=0;                                

	for(pos=31;pos>=0;pos--)
           {	
		if(n>>pos&1)
		{
			printf("1");
			c++;
		}
		else
			printf("0");
           }
   return c;
          	
}      
