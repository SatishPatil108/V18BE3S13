#include"header.h"
main()
{
    int r;
    printf("Hello...\n");
    r=fork();
    printf("r=%d\n",r);

   if(r==0)
    { 
        printf("In child...\n");
    }
    else
    {
        printf("in Parent...\n");
    }

    while(1);

}

