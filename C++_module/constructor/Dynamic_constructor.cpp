#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
    public :
        A()
        {
            cout << "constructor" << endl;
            x=100,y=200;
        }

        A(int a,int b)
        {
            cout << "Parametrized" << endl;
            x=a,y=b;
        }
        void print_data()
        {
            cout << x << " " << y << endl;
        }
};
main()
{
    A *ptr,*ptr1;

    ptr=new A;
    ptr1=new A(10,20);

    ptr->print_data();
    ptr1->print_data();
}


