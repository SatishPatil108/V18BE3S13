#include<stdio.h>
int main()
{
    int n1,n2,res;
    char op;

    printf("Enter the two number\n");
    scanf("%d%d",&n1,&n2);



    printf("Enter the option\n");
    printf(" + Addtion \n - Subtraction \n * Multiplication \n / Division \n Default\n");

    scanf(" %c",&op);
//    printf("op=%d\n",op);

    switch(op)
    {
        case '+' : res=n1+n2;
                   printf("Result=%d\n",res);
                   break;

        case '-' : res=n1-n2;
                   printf("Result=%d\n",res);
                   break;

        case '*' : res=n1*n2;
                   printf("Result=%d\n",res);
                   break;

        case '/' : if(n2==0)
                     printf("Floating Point Exception\n");
                   else
                    {
                      res=n1/n2;
                      printf("Result=%d\n",res);
                    }
                    break;
       satish:printf("Unknown option\n");
    }
}


