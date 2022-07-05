#include<stdio.h>
main()
{
char ch;
printf("enter the character...\n");
scanf("%c",&ch);

if(ch>='a' && ch<='z')
 printf("lower case\n");

else if(ch>='A' && ch<='Z')
printf("upper case\n");

else if(ch>='0' && ch<='9')
printf("digit\n");
else
printf("spl...\n");


}
