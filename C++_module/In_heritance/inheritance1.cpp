#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
        void set_data()
        {
            cout << "Enter Data" << endl;
            cin >> x >> y;
        }

        void print_data()
        {
            cout << "x=" << x << " " << "y=" << y << endl;
        }
};
class B: public A
{ 
    int m,n;
    public:
        void set_B()
        {
            cout << "Enter Data" << endl;
            cin >> m >> n;
        }

        void print_B()
        {
            cout << "m=" << m << " " << "n=" << n << endl;
        }
};
main()
{
    A a1;
    B b1;
  
    b1.set_data();
    b1.set_B();

    b1.print_data();
    b1.print_B();

}
