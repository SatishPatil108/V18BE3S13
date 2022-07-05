#include<stdio.h>
main()
{

 char ch,i,j,m,n;
  printf("Enter the character:\n");
  scanf("%c",&ch);

for(i=0,j=4;i<4;i++,j--)

{
ch=ch>>4|ch<<4;
}

printf("%c",ch);

}






