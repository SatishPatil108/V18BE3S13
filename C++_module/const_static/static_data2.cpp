#include<iostream>
using namespace std;
class A
{
    int y;
        public:
            static int count;
             A()
             {
                 count++;
                 y=0;
             }

             void print_data()
             {
                 cout << "count-" << count <<  endl;
                 cout  << "y-" << y << endl;
             }
};

int A :: count;
main()
{
    A a1,a2,a3,a4;
    a1.print_data();
    cout << a1.count << endl;
    cout << a2.count << endl;
    cout << a3.count << endl;
    cout << a4.count << endl;

    cout << A::count << endl;
}
