#include<iostream>
using namespace std;
struct st
{
    private :
        int x;
        int y;

        void set_data()
        {
            x=10,y=20;
        }
        void print()
        {  
          cout << "x-" << x << " " << "y-" << y << endl;
        }

};


main()
{
    struct st s;
    s.set_data();// set_data & print are privte so we can not access out side.
    s.print();// so it will give error.
    cout << "size-" << sizeof s << endl;
}
