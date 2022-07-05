#include"header.h"
//tcp client
main()
{
    char s[20];
    struct sockaddr_in v,v1;
    int sfd,len,r,nsfd;
    sfd=socket(AF_INET,SOCK_STREAM,0);
    if(sfd<0)
    {
        perror("socket");
        return;
    }

    perror("socket");
    printf("sfd=%d\n",sfd);
    ////////////////////////////////////////////////////
    v.sin_family=AF_INET;
    v.sin_port=htons(3000);//server port number
    v.sin_addr.s_addr=inet_addr("127.0.0.1");// server ip
    len=sizeof(v);
    r=connect(sfd,(struct sockaddr *)&v,len);
     if(r<0)
     {
         perror("connect");
         return;
     }
     perror("connect");
    /////////////////////////////////////////////////////
    printf("Enter the string\n");
    scanf("%s",s);
    write(sfd,s,strlen(s)+1);
    read(sfd,s,sizeof(s));
    printf("new=%s\n",s);
}
