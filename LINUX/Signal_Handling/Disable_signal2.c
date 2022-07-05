#include"header.h"
void my_isr(int n)
{
    void (*fp)(int);
    printf("In isr....\n");
    fp=signal(SIGINT,SIG_DFL);

    if(fp==SIG_IGN)
    printf("Ign...\n");
   
    else if(fp==SIG_DFL)
    printf("DFL......\n");
        
    signal(SIGQUIT,SIG_DFL);
}

main()
{

    signal(SIGINT,SIG_IGN);
    signal(SIGQUIT,SIG_IGN);

    signal(SIGALRM,my_isr);
    alarm(10);
    while(1);
}
