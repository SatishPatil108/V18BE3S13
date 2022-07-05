#include<iostream>
using namespace std;
struct st
{
    private :
            int x;
            int y;
    public :
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
    s.set_data();
    s.print();

    cout << "size-" << sizeof s << endl;
}
