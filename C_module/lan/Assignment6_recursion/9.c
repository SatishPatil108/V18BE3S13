#include<stdio.h>
int perfect(int);
main()
{
	int num,r,sum;
	printf("enter the number\n");
	scanf("%d",&num);

        sum=perfect(num);
        printf("\b sum=%d\n",sum);
        if(sum==num)
	printf("perfect number\n",r);
        else
        printf("not\n");
}

int perfect(int n)
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
	        perfect(n);
        }   
      return s;
}


