#include"header.h"
void my_isr(int n)
{
    printf("In isr...n=%d\n",n);
}
main()
{
    printf("Hello....pid=%d\n",getpid());
    signal(SIGINT,SIG_IGN);
    signal(SIGINT,my_isr);
    printf("Hai...\n");
    while(1);
}
