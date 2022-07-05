#include"header.h"
void my_isr(int n)
{
    printf("In isr.....\n");
    alarm(10);
}
main()
{
    signal(14,my_isr);
    printf("Hello....pid=%d\n",getpid());
    alarm(10);
    printf("Hai...\n");
    while(1);
}
    
