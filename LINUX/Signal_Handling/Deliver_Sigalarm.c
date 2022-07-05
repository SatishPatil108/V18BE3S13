#include"header.h"
int n;
void my_isr(int signum)
{
    printf("In isr....\n");
    n--;

    if(n==0)
        raise(9);// send the signal to calling process
    else
        alarm(n);
}

main(int argc,char **argv)
{
    signal(14,my_isr);
    if(argc!=2)
    {
        printf("Usage:./a.out number\n");
        return;
    }

    n=atoi(argv[1]);
    alarm(n);
    while(1);
}

