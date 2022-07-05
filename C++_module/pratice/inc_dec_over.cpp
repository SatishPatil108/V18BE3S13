#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(){}
    void set_data(int a)
    {
        x=a;
    }
    
    void print_data()
    {
        cout << "x=" << x << endl;
    }

     A operator ++(int)
    {
        cout << "post-increment" << endl;
        A temp;
        temp.x=x;
        return temp;
        x=x+1;
    }

    A operator ++()
    {
        cout<< "pre-increment" <<endl;
        x=x+1;
        return *this;
    }
};
main()
{
    A a1,a2;
    a1.set_data(10);
    a1.print_data();
    a2=++a1;
    a2.print_data();
}


