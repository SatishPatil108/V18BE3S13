#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    int *p;

    public :
        A()
        {
            p=new int;
        }

        void set_data(int x,int y,int z)
        {
            a=x,b=y,*p=z;
        }

        void print_data()
        {
            cout<<"a="<<a<<" "<< "b="<<b<<" " <<"*p="<<*p<<endl;
        }

        A(A &temp)
        {
           // a=temp.a,b=temp.b,p=temp.p; //this is for shallow copy

            a=temp.a,b=temp.b;
            p=new int;
            *p=*(temp.p);
        }
        void modify()
        {
            *p=100;
        }
};
main()
{
    A d1;
    d1.set_data(22,44,66);
    A d2=d1;
    d1.print_data();
    d2.print_data();

    d2.modify();
    cout<<"************************************" <<endl;
    d1.print_data();
    d2.print_data();
}
