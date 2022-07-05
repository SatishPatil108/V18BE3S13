#include<iostream>
using namespace std;
class A
{
    int x;
    public:
        A(){
        cout<< "constructor A" << endl;
        x=100;
        }
        ~A(){
            cout << "Destructor A" << endl;
        }

    void print_data()
    {
        cout << "x=" << x << endl;
    }
};
class B:public A
{
    int y;
    public:
    B(){
        cout << "constructor B" << endl;
        y=200;
    }
    ~B(){
        cout << "Destructor B" << endl;
    }

    void print_data()
    {
        A::print_data();
        cout << "y=" << y << endl;
    }
};
class C:public A
{
    int z;
    public:
    C(){
        cout << "constructor C" << endl;
        z=300;
    }
    ~C(){
        cout << "Destructor D" << endl;
    }

    void print_data()
    {
        A::print_data();
        cout << "z=" << z << endl;
    }
};
class D :public A
{
    int w;
    public:
    D(){
        cout << "constructor D" << endl;
        w=400;
    }
    ~D(){
        cout << "Destructor D" << endl;
    }
    void print_data()
    { 
        A::print_data();
        cout << "w=" << w << endl;
    }
};

main()
{

    B b1;
    C c1;
    D d1;
    
    b1.print_data();
    c1.print_data();
    d1.print_data();
}

