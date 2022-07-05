#include<stdio.h>
main()
{
int x,y;
float result1,result2,result3;
printf("enter the no..\n");
scanf("%d %d",&x,&y);


result1=(3*(x+y)/(9*x+2*y)-((x-y)/(2*x+3*y)));
result2=(2*x-y)/((3*x+y)*(x-2)*(y+3));
result3=(3*x+4*y)*(2*x-3)/((x-y)/(x+y)+(2*x+3));

printf("%f\n %f\n %f\n ",result1,result2,result3);


}

