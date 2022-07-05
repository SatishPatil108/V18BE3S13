#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:./cal num op num\n");
		return;
	}
       int n1,n2,n3;
	n1=atoi(argv[1]);
	n2=atoi(argv[3]);

	switch(argv[2][0])
	{
		case '+': n3=n1+n2;
			 printf("n3=%d\n",n3);
			 break;

		case '-': n3=n1-n2;
			 printf("n3=%d\n",n3);
			 break;
		case '*': n3=n1*n2;
			 printf("n3=%d\n",n3);
			 break;
		case '/': n3=n1/n2;
			 printf("n3=%d\n",n3);
			 break;
		default:printf("unknown option\n");
	}
}
