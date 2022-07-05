#include"header.h"
main()
{
    char s[20];
    fd_set v;
    struct timeval t;
    int r;
    t.tv_sec=10;
    t.tv_usec=0;
    FD_ZERO(&v);// clear the v
    FD_SET(0,&v);//std in file descripter

    printf("Enter the String\n");
    r=select(1,&v,0,0,&t);

    if(r<0)
    {
        perror("select");
        return;
    }

    else if(r==0)
    {
        printf("Time Out..\n");
        return;
    }
    else
    {
        scanf("%s",s);
        printf("Data=%s\n",s);
    }
}

