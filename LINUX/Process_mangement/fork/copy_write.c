#include"header.h"
main()
{
    int i=10;
    if(fork()==0)
    {
        printf("In child...i=%d\n",i);
    }
    else
    {
        i=20;
        printf("In Parent.....i=%d\n",i);
    }
}

