#include"header.h"
main()
{
    int i;
    printf("Hello");
    for(i=0;i<3;i++)
    {
        if(fork()==0)
         printf("hai...\n");

        else
            ;
    }
}

