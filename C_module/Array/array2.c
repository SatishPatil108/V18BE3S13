#include<stdio.h>
main()
{
	int a[10],i,j,ele,c,d;

	ele=sizeof(a)/sizeof(a[0]);


	printf("enter the ele ....\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);


	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");




	//////////////////////////////////////

         for(i=0,c=0;i<ele;i++)
        {
           if(a[i]%2==0)
            c++;
        }  
          printf("%d\n",c);
          d=ele-c;
          printf("%d\n",d);
    
        //} 
        /////////////////////////////////////
 
//   	for(i=0;i<ele;i++)
//		printf("%d ",c);
  //              printf("%d ",d);
//	printf("\n");


}





