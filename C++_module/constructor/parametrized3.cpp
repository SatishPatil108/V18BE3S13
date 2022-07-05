#include<iostream>
using namespace std;
class A
{
    int p;
    int q;
        public :
            A(int a=100,int b=200)
            {
                cout << "parametrized" << endl;
                p=a,q=b;
            }

            void print_data()
            {
                cout << p << " " << q << endl;
            }
};

main()
{
    A obj1,obj2(500,600),obj3;
    obj1.print_data();
    obj2.print_data();
    obj3.print_data();
}
