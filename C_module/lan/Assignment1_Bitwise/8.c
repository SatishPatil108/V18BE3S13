#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf(" %c",&ch);
    
    ch=ch|(32);
    printf("ch=%c\n",ch);//capital to small

    ch=ch&~(32);
    printf("ch=%c\n",ch);// small to capital
}
