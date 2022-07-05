#include"header.h"
//tcp server
void strupper(char *p);
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
    v.sin_port=htons(3000);
    v.sin_addr.s_addr=inet_addr("0.0.0.0");
    len=sizeof(v);
    
    r=bind(sfd,(struct sockaddr*)&v,len);
    if(r<0)
    {
        perror("bind");
        return;
    }
    perror("bind");
    listen(sfd,5);
    perror("listen");
    /////////////////////////////////////////////////////
    printf("Before.........\n");
    nsfd=accept(sfd,(struct sockaddr *)&v1,&len);
    printf("After.....\n");
    if(nsfd<0)
    {
        perror("nsfd");
        return;
    }

    perror("accept");
    //////////////////////////////////////////////////////
    while(1)
    {
    read(nsfd,s,sizeof(s));
    strupper(s);
    write(nsfd,s,strlen(s)+1);
    if(strcmp(s,"BYE")==0)
    break;     
    }
    
}

void strupper(char *p)
{
    int i;
    for(i=0;p[i];i++)
    {
        if(p[i]>='a' && p[i]<='z')
         p[i]=p[i]-32;
    }
}
