#include<iostream>
using namespace std;
class A
{
    int x;
    public:
        A(){}
       A(int a)
        {
            cout << "constructor A" << endl;
            x=a;
        }
        ~A(){
            cout << "Destructor A" << endl;
        }

    void print_data()
    {
        cout << "x=" << x << endl;
    }
};

class B:protected A
{
    int y;
    public :
    B(){}
    B(int a,int b):A(a)
      {
        cout << "constructor B" << endl;
        y=b;
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

class C :public B
{
    int z;
    public :
    C(){}
    C(int a,int b,int c):B(a,b)
    {
        cout << "constructor C" << endl;
        z=c;
    }
  
    ~C()
    {
        cout << "Destructor C" << endl;
    }
  void print_data()
       {
           cout << "z=" << z << endl;
           B::print_data();
       }
};

main()
{
    C c1(10,20,30);
    cout << "Size=" << sizeof c1 << endl;
    c1.print_data();
}
