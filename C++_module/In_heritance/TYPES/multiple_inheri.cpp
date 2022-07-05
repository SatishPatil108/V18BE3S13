#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(){
     cout << "constructor A" << endl;
     x=100;
    }
    ~A(){
    cout << "Destructor A" << endl;
    }
};

class B
{
    int y;
    public :
    B(){
        cout << "constructor B" << endl;
        y=200;
      }
    ~B(){
        cout << "Destructor B" << endl;
    }
};

class C
{
    int z;
    public:
        C(){
            cout << "constructor C" << endl;
            z=300;
        }
        ~C(){
            cout << "Destructor C" << endl;
        }
};

class D:public A,public B,public C
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
        cout << "w=" << w << endl;
    }
};
main()
{
    D d1;
    d1.print_data();
}





