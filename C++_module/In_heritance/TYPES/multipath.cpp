#include<iostream>
using namespace std;
class A
{
    int p;
    public:
    A(){
        cout << "constructor A" << endl;
        p=100;
    }
    ~A(){
        cout << "Destructor A" << endl;
    }

    void print_data()
    {
        cout << "p=" << p << endl;
    }
};

class B:public A
{
    int q;
    public:
    B(){
        cout << "constructor B" << endl;
        q=200;
    }
    ~B(){
        cout << "Destructor B" << endl;
    }

    void print_data()
    {
        A::print_data();
        cout << "q=" << q << endl;
    }
};

class C:public A
{
    int r;
    public:
    C(){
        cout << "constructor C" << endl;
        r=300;
    }
    ~C(){
        cout << "Destructor C" << endl;
    }
    void print_data()
    {
        cout << "r=" << r << endl;
    }
};
class D:public B,public C
{
    int s;
    public:
    D(){
        cout << "constructor D" << endl;
        s=400;
    }
    ~D(){
        cout << "Destructor D" << endl;
    }
    void print_data()
    {
        B::print_data();
        C::print_data();
        cout << "s=" << s << endl;
    }
};
main()
{
   D d1;
    d1.print_data();
}
