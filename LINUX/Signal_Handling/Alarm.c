#include"header.h"
main()
{
    printf("Hello....pid=%d\n",getpid());
    alarm(10);
    printf("Hai...\n");
    while(1);
}
