#include<stdio.h>
void prime(int ,int);
main()
{
	int m,n;
	printf("enter the min and max\n");
	scanf("%d %d",&m,&n);

	prime(m,n);
}

void prime(int m,int n)
{
	static int c=0;
	if(m<n)
	{
		int j=1;
		int d=0;
	 a:  if(j<=m)
    	    {
	   	 if(m%j==0)
	    	 {
		    d++;
	         }
	      j++;
	      if(j<=m)
	    goto a;
            }

  		  if(d==2)
    		 {
	    	   c++;
	           if(c<=100)
		   printf(" %d\t",m);
                 }

    		m++;
    		prime(m,n);
	}


}




































/*



   {
   int i,j,c,k;
   printf("first 100 prime no:\n");
   for(i=0,c=0;i<1000;i++)
   {
   for(j=2;j<1000;j++)
   {
   if(i%j==0)      
   break;	


   }
   if(i==j)
   {
   c++;

   if(c==100)
   break;
   printf(" %d",i);

   }



   }

   printf("\n");

   }
 */
