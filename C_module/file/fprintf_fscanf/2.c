#include<stdio.h>
main()
{
 int i;
 FILE *fp;
 fp=fopen("data","r");
 fscanf(fp,"%d",&i);

 printf("%d\n",i);
}
