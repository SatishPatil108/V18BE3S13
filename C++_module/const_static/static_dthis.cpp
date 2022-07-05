#include<iostream>
using namespace std;
class A
{
    int y;
    static int count;
    A()
    {
        cout << "constructor" << endl;
        count++;
        y=0;
    }

    public :
     static void created_object()
            {
            cout << "object created" << endl;
            A obj1;
            obj1.print_data();
            A a2;
            a2.print_data();
            }

        void print_data()
        {
            cout << "count-" << count << endl;
            cout << "y-" << y << endl;
        }
};

int A :: count;
main()
{
    A :: created_object();
}
