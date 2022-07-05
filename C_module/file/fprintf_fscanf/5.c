#include<stdio.h>
main()
{
 char s[]="hello";
 FILE *fp;

 fp=fopen("data","w");
 fprintf(fp,"%s",s);


}
 
