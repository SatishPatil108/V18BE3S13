#include<stdio.h>
main()
{
 int b[2][3]={10,20,30,40,50,60},r,c;
 
printf("%d\n",sizeof(b));
printf("%d\n",sizeof(b[0]));
printf("%d\n",sizeof(b[0][0]));

r=sizeof(b)/sizeof(b[0]);
c=sizeof(b[0])/sizeof(b[0][0]);


printf("%d %d\n",r,c);
}
  
 
