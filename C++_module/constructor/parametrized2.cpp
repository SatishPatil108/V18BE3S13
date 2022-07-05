#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
     public :
        A(int a,int b)
        {
            cout << "Parametrized" << endl;
            x=a,y=b;
        }

        void print_data()
        {
            cout << x << " " << y << endl;
        }
};
main()
{
    A obj1,obj2(10,20),obj3;//it will generate error
    obj1.print_data();
    obj2.print_data();
   obj3.print_data();
}


