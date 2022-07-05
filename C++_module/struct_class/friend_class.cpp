#include<iostream>
using namespace std;
class A
{
    int x;
    int y;

    public :
        void set_data(int a,int b);
        friend class other;
};

void A:: set_data(int a,int b)
{
    x=a,y=b;
}

class other
{
    public :
        void print_data1(A &a1)// catch with reference variable
        {
            cout << "x-" << a1.x << " "; 
            cout << "y-" << a1.y <<endl;
        }

        void print_data1(A *a1)// catch with pointer
        {
            cout << "x-" << a1->x << " ";//print x & y
            cout << "y-" << a1->y << endl;
        }

        void print_data2(A a1)// catch with object name
        {
            cout << "y-" << a1.y << " ";
            cout << "y-" << a1.y <<endl;
        }
};

main()
{
    A a1;
    other p;
    a1.set_data(100,200);
    p.print_data1(a1);//here passing the address
    p.print_data1(&a1);// here passing the object
    p.print_data2(a1);// here passing the object
}

