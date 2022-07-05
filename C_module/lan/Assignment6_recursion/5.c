#include<stdio.h>
int divisor(int);
main()
{
	int num,sum;
	printf("enter the number\n");
	scanf("%d",&num);

        sum=divisor(num);
	printf("\b sum=%d\n",sum);
}

int divisor(int n)
{
        
       	static int s=0,m=1;
	if(n)
	{   
               if(n%m==0)
                 {
			printf("%d+",m);
                        s=s+m;
		 }
		m++; 
		if(m<n)
	        divisor(n);
       }
      return s;
}


