/*basic calculator */
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
    int n,m,op,res=0,p;
   
    if(argc!=4)
    {
    printf("Usage : ./a.out no1 op no2\n");
    return 0;
    }
    m=atoi(argv[1]);
    n=atoi(argv[3]);

    switch(argv[2][0])
    {
        case '+':res=m+n;
                 printf("Result : %d\n",res);
                 break;

        case '-':res=m-n;
                 printf("Result : %d\n",res);
                 break;

        case '*':res=m*n;
                 printf("Result : %d\n",res);
                 break;

        case '/':if(n==0)
                 {
                   printf("floating point exception\n");
                   break;
                 }
                 res=m/n;
                 printf("Result : %d\n",res);
                 break;

       satish : printf("Unknown option\n");
    }
}
