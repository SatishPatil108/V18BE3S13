#include"header.h"
#define pf printf
main()
{
    if(fork()==0)
    {
      pf("In Child1...\n");
    }
    else
    {
        pf("In Parent...\n");
        
        if(fork()==0)
        {
           pf("In Child2...\n");
        }
        else
        {
           pf("In parent...\n");
            
           if(fork()==0)
           {
             pf("In Child3...\n");
           }
           else
           {
               pf("In Parent...\n");
           }
        }
    }
    while(1);
}
