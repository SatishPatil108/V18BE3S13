#include"header.h"
main()
{
    printf("Hello....\n");
    if(fork())
    {
        printf("In Parent...\n");
    }
    else
    {
        printf("In child..\n");
    }
    while(1);
}
