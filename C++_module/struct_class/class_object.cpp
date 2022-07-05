#include<iostream>
using namespace std;
class st
{
    int x;
    int y;

    public:
        void set_data()
        {
             x=100,y=200;
        }

        void print()
        {
            cout << "x-" << x << " " << "y-" << y << endl;
        }
};

main()
{
  class st s;
  s.set_data();
  s.print();
  cout << "size-" << sizeof s << endl;
}
