#include"header.h"
main()
{
    int a[5],i;
    srand(getpid());
    for(i=0;i<5;i++)
       a[i]=rand()%51+150;//random Number between 150-200
        
       // a[i]=rand()%6+4; // Random number between 0-10

    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    printf("\n");
}

