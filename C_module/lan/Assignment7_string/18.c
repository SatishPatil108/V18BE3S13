//18
#include<stdio.h>
int main()
{

	int i,j,l,m;


	char s[50],ch;

	printf("enter the string\n");
	scanf(" %[^\n]",s);         

	for(i=0;s[i];i++);

	while(i>=0)
	{
		i--;
		l=i; 

		while(s[i]!=' ' && i>0)                  
			i--;

		s[i]==' '?m=i+1:(m=i);
		for(m;m<l;l--,m++)
		{
			ch=s[l];
			s[l]=s[m];
			s[m]=ch;
		}



	}

     printf("%s\n",s);

}


