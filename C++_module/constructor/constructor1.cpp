#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
    public : 
        A()                             // decleration of constructor 
        {
            cout << "constructor" << endl;
            x=100,y=200;
        }

        void print_data()
        {
            cout << x << " " << y << endl;
        }

};
main()
{
    A obj1,obj2,obj3;
    obj1.print_data();
    obj2.print_data();
    obj3.print_data();
}
