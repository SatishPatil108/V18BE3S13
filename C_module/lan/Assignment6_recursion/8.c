#include<stdio.h>
void palin(char *,int);
main()
{
	char s[20];
	int i;
	printf("enter string\n");
	scanf("%s",s);

	for(i=0;s[i];i++);
	printf("%d\n",i);

	palin( s,i-1);

}

void palin(char *p,int n)
{
	static int j=0;
	if(p[j]==p[n])
	{
		j++;
		n--;
		if(j<n)
		{ 
			palin(p,n);
			return;
		}
       }
      
 		if(j==n)
			printf("palindrome number\n");
		else
			printf("Not palidrome\n");
}

