#include<iostream>
using namespace std;
class A
{
    public:
    int x;
        A(){
            cout << "constructor A" << endl;
            x=10;
        }
        ~A(){
            cout << "Destructor A" << endl;
        }
};

class B: virtual public A
{
    public:
    int y;
    B(){
        cout << "constructor B" << endl;
        y=20;
    }
    ~B(){
        cout << "Destructor B" << endl;
    }

};

class C:virtual public A
{
  public:
  int z;
      C(){
          cout << "constructor C" << endl;
          z=30;
      }
      ~C(){
          cout << "Destructor C" << endl;
          }

};
class D:public B,public C
{
   public:
   int w;
      D(){
          cout << "constructor D" << endl;
          w=40;
      }
      ~D(){
          cout << "Destructor D" << endl;
      }

      void print_data()
      { 
          cout << "x=" << B::x << endl;
          cout << "x=" << C::x << endl;
          cout << "y=" << y << endl;
          cout << "z=" << z << endl;
          cout << "w=" << w << endl;
      }
};
main()
{
    D d1;
    d1.print_data();
}

