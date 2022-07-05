#include<stdio.h>
main()
{
 int a[5]={10,20,30,40,50},i;
 FILE *fp;
 fp=fopen("data","w");
 
 for(i=0;i<5;i++)
 fprintf(fp,"%d ",a[i]);
}

