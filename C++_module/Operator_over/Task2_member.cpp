#include<iostream>
using namespace std;
class A
{
    int x,y;
        public:
            A(){}
            A(int a,int b):x(a),y(b){}
            
            A operator+(int d)
            {
                A ret;
                ret.x=x+d;
                ret.y=y+d;

                return ret;
            }


            void print_data()
            {
                cout << "x=" << x << " " << "y=" << y << endl;
            }


};
main()
{
    A a1(100,200),a2;
    a2=a1+100;
    a2.print_data();
}
