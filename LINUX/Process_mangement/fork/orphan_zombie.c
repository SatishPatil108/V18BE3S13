#include"header.h"
main()
{
    if(fork()==0)
    {

        printf("In C Pid=%d  PPid=%d\n",getpid(),getppid());
        
        sleep(10);

        printf("After Sleep In C Pid=%d  PPid=%d\n",getpid(),getppid());
    }
    else
    {
        printf("In P....\n");
        sleep(5);

        printf("In P After Sleep.........\n");;
    }
}

