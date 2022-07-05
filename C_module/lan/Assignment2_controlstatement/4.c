/* lower to upper & upper to lower */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charactor\n");
    scanf(" %c",&ch);

    if(ch>='a' && ch<='z' )
    {
        ch=ch-32;
        printf("ch=%c\n",ch);
    }
    
    else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        printf("ch=%c\n",ch);
    }
}
