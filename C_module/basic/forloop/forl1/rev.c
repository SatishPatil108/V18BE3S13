#include<stdio.h>
main()
{

	int s,r,num,num1;
	printf("Enter the no:\n");
	scanf("%d",&num);

	num1=num;
	/* for(s=0;num1; )

	   {
	   r=num1%10;
	   s=s*10+r;
	   num1=num1/10;
	   }
	 */

	for(s=0;num1;s=s*10+num1%10,num1=num1/10);

	printf("%d\n",s);

	if(num==s)
		printf(" pallindrome no\n");
	else
		printf("not pallindrome\n");

}
