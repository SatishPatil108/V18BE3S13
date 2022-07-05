#include<iostream>
using namespace std;
class A
{
    int x;
    int y;

    public :
        void set_data(int a,int b);
        void print_data();
};

void A::set_data(int a,int b) 
{
    cout << "f-" << (unsigned)this << endl;
    x=a,y=b;
}

void A::print_data()
{

    cout << "f-" << (unsigned)this << endl;
    cout << "x-" << x << " " << "y-" << y << endl;
}

main()
{
    A c1,c2;
   
    cout << "c1-" << (unsigned)&c1 << endl;
    cout << "c2-" << (unsigned)&c2 << endl;
    
    c1.set_data(10,20);
    c1.print_data();
    
    c2.set_data(100,200);
    c2.print_data();
}

