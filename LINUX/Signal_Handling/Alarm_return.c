#include"header.h"
void my_isr(int n)
{
    printf("In isr...\n");
}
main()
{
    int r;
    signal(14,my_isr);
    printf("Hello.....pid=%d\n",getpid());
    r=alarm(10);
    printf("1)r=%d\n",r);
    sleep(3);
    r=alarm(2);
    printf("2)r=%d\n",r);
    printf("hai...\n");
    while(1);
}

