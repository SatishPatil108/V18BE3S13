#include<iostream>
using namespace std;
class A
{
    static int count;// static variable decleration
    int y;

    public:
        A()
        {
          count=0;
          y=0;
        }
    void print_data()
    {
        cout << "count-" << count << endl;
        cout << "y-" << y << endl;
    }
};
int A :: count;// static variable defination
main()
{
    A a1;
    a1.print_data();
    cout << sizeof(a1) << endl;
    cout << sizeof(A)  << endl;
}
