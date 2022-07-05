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
class C : public B
{ 

    int z;
    public :

        C(){
            cout << "constructor C" << endl;
            z=300;
        }
        ~C(){
            cout << "Destructor C" << endl;
        }

        void print_data()
        {     
              B::print_data();
              cout << "z=" << z << endl;
        }
};

class D
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
class E : public C,public D
{
    int p;
    public:
        E(){
            cout << "constructor E" << endl;
            p=500;
        }
        ~E(){
            cout << "Destructor E" << endl;
        }

        void print_data()
        {
            C::print_data();
            D::print_data();
            cout << "p=" << p << endl;
        }
};       
main()
{
    E e1;
    e1.print_data();
}
