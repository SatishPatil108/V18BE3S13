#include"header.h"
void my_isr(int n)
{
   printf("In isr...n=%d\n",n);
   signal(n,SIG_DFL);
}

main()
{
  printf("Hello....pid=%d\n",getpid());
  signal(SIGINT,my_isr);
  printf("Hai...\n");
  while(1);
}


