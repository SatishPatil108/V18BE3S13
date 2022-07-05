#include<stdio.h>
#include<stdlib.h>
main()
{
 int**p;
 int rollno[5],i,j,k,l=3;
 char name[5][10];
 float marks[5];

 p=malloc(sizeof(int*)*l);

 for(i=0;i<l;i++)
 p[i]=malloc(sizeof(int*)*l);

 printf("enter the Data\n");
 for(i=0;i<rollno[i];i++)
 for(j=0;j<name[j];j++)
 for(k=0;k<marks[k];k++)
 scanf("%d",&p[i][j][k]);
 printf("---------------------------\n");
 
 for(i=0;i<rollno[i];i++)
 for(j=0;j<name[j];j++)
 for(k=0;k<marks[k];k++)
 printf("%d ",p[i][j][k]);
 
}
