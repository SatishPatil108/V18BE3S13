#include"header.h"
main()
{
    char s[20];
    fd_set v;
    struct timeval t;
    int r,fd;
    t.tv_sec=10;
    t.tv_usec=0;

    mkfifo("f1",0644);
     fd=open("f1",O_RDWR);

     FD_ZERO(&v);
     FD_SET(0,&v);
     FD_SET(fd,&v);

     printf("Enter the string\n");

     r=select(5,&v,0,0,&t);
     if(r<0)
     {
         perror("select");
         return;
     }
     else if(FD_ISSET(0,&v))
     {
       scanf("%s",s);
       printf("STDIN=%s",s);
       FD_CLR(0,&v);
     }
     else if(FD_SET(fd,&v))
     {
         read(fd,s,sizeof(s));
         printf("FIFO=%s\n",s);
     }
}
