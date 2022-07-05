#include<iostream>
using namespace std;
class A
{
    int x;
    int y;

    public:
            A(){}
            A(int a,int b):x(a),y(b){}
            A operator + (A &temp)
            {
                A ret;
                ret.x=x+temp.x;
                ret.y=y+temp.y;

                return ret;
            }
            void print_data()
            {
                cout << "x-" << x << " ";
                cout << "y-" << y << endl;
            }
};
main()
{
    A a1(10,20),a2(100,200),a3;
   // a3=a1+a2;

    a3=a1.operator + (a2);

    a3.print_data();
}

        

