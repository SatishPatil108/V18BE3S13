/* swap the two number using bitwise */
#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter the two number\n");
   scanf("%d%d",&a,&b);

   printf("Before...............................\n");
   printf("a=%d b=%d\n",a,b);

   a=a^b;
   
   b=a^b;
 
   a=a^b;

   printf("After................................\n");
   printf("a=%d b=%d\n",a,b);
}
