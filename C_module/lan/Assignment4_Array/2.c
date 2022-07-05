#include<stdio.h>
int main()
{

	int a[5],ele,big,sml,i;

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter the element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

        printf("Before............................\n");
	for(i=0;i<ele;i++)   
		printf("%d ",a[i]);
	printf("\n");

        ////////////////////////////////////////////

       if(a[0]>a[1])
       {
           big=a[0];
           sml=a[1];
       }
       else
       {
           big=a[1];
           sml=a[0];
       }

       for(i=2;i<ele;i++)
       {
           if(a[i]<sml)
           {
              sml=a[i];
           }
           else if(a[i]>big)
           {
               big=a[i];
           }
       }
       printf("After.............................\n");
       printf("biggest=%d smallest=%d\n",big,sml);
}
