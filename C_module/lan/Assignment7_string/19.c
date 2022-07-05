//19
#include<stdio.h>
int main()
{
	int i,j,l,m,n,p,q;
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
	for(p=0;s[p];p++);
	for(q=0,p=p-1;p>q;q++,p--)
	{
		ch=s[q];
		s[q]=s[p];
		s[p]=ch;
	}
	printf("%s\n",s);
}







