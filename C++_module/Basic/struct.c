#include<stdio.h>
struct st
{
    int a;
    int b;
    int c;
};
main()
{
    struct st s;

    scanf("%d%d%d",&s.a,&s.b,&s.c);

    printf("%d %d %d\n",s.a,s.b,s.c);
}
