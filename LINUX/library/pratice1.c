#include"header.h"

main()
{
    int (*p)(int,int);
    void *handler;
    int i=10,j=20,k,op;

     printf("Enter the op(1,2)\n");
     scanf("%d",&op);

     if(op==1)
     {
         handler=dlopen("./libmno.so",RTLD_LAZY);
         if(handler==0)
         {
             printf("%s\n",dlerror());
             return;
         }
     
         p=dlsym(handler,"sum");
         if(p==0)
          {
             printf("%s\n",dlerror());
             return;
          }
        k=(*p)(i,j);
        printf("k=%d\n",k);
        dlclose(handler);
     }
     else if(op==2)
     {
          handler=dlopen("./libmno.so",RTLD_LAZY);
          if(handler==0)
          {
             printf("%s\n",dlerror());
             return;
          }
     
         p=dlsym(handler,"mul");
         if(p==0)
          {
             printf("%s\n",dlerror());
             return;
          }
        k=(*p)(i,j);
        printf("k=%d\n",k);
        dlclose(handler);
     }
     else
         printf("Unknown Option\n");
         while(1);
}

