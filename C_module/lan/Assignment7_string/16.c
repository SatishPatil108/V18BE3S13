//16
#include<stdio.h>
int main()
{
	int i,j,k;
	char p[10],q[10],d[50];

	printf("enter the two strings\n");
        scanf(" %[^\n]",p);
        scanf(" %[^\n]",q);

	for(i=0,j=0,k=0;p[i]||q[j];i++,j++,k++)
	{
		if(p[i]!='\0')      
		{
			d[k]=p[i];
			k=k+1;
			d[k]=q[j]; 	

			if(q[j]=='\0')
			{
				k=k-1; 
				d[k]=p[i];
				j--;                        
			}

		}
		else if(p[i]=='\0'&&q[j]!='\0')
		{
			d[k]=q[j];
			i--;
		}

	}


	d[k]='\0';
	printf("%s\n",d);
}
