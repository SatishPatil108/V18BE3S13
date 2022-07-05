#include<stdio.h>
main()
{
 int i=1234;
 FILE *fp;
 
 fp=fopen("data","w");
 fprintf(fp,"%d\n",i);
 printf("%d",i);
}
