#include<stdio.h>
int main()
{
    unsigned char ch=0xab;
    printf("Before=%x\n",ch);
    ch=ch>>4 | ch<<4;
    printf("After=%x\n",ch);
}
