#include<iostream>
using namespace std;
class A
{
    int x;
    public :
      A(){
          cout << "constructor A" << endl;
          x=10;
      }
      ~A(){
          cout << "Destructor A" << endl;
      }
};
class B : public A
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
};
class C : public B
{
    int z;
    public:
    C(){
        cout << "constructor C" << endl;
    }
    ~C(){
        cout <<"Destructor C" << endl;
    }
};
main()
{
   C c1;
   cout << "size=" << sizeof(A) << endl;
   cout << "size=" << sizeof(B) << endl;
   cout << "size=" << sizeof(C) << endl;
   cout << "size=" << sizeof(c1) << endl;
}


