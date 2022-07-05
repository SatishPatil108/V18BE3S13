#include<iostream>
using namespace std;
class A
{
  int x;
    public:
        A(){
            cout << "constructor A" << endl;
            x=10;
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
        y=20;
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
          z=30;
      }
      ~C(){
          cout << "Destructor C" << endl;
    
      }

        void print_data()
        {
           cout << "z=" << z << endl;
        }
};
class D:public B,public C
{
    int w;
    public:
      D(){
          cout << "constructor D" << endl;
          w=40;
      }
      ~D(){
          cout << "Destructor D" << endl;
      }

      void print_data()
      { 
          B::print_data();
          C::print_data();
          cout << "w=" << w << endl;
      }
};
main()
{
    D d1;
    d1.print_data();
}

