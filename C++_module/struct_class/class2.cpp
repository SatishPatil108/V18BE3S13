#include<iostream>
using namespace std;
class st
{
    int x;
    int y;
        
        void set_data()
        {
            x=10,y=20;
        }

    public :
        void print()
        {
            set_data();
            cout << "x-" << x << " " << "y-" << y <<endl;
        }
};

main()
{
     st c;
     c.print();
     cout << "size-" << sizeof c << endl;
}
