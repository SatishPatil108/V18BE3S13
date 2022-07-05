#include<iostream>
using namespace std;
class A
{
    public:
            int x;
            A(){
                cout << "constructor A" << endl;
                x=100;
               }
            ~A(){
                cout << "Destructor A" << endl;
            }
};

class B :public A
{
    public :
        int x;
        B(){
            cout << "constructor B" << endl;
            x=200;
        }
        ~B(){
            cout << "Destructor B" << endl;
        }
        
        void print_data()
        {
            cout << "x=" << x << endl;
            cout << "x=" << A::x << endl;
        }
};

main()
{
    B b1;
    b1.print_data();
}

