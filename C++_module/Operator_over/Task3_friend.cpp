#include<iostream>
using namespace std;
class A
{
    int x,y;
        public:
            A(){}
            A(int a,int b):x(a),y(b){}

            void print_data()
            {
                cout << "x=" << x << " " << "y=" << y <<endl;
            }
        friend  A operator + (int,const A&);

};
A operator + (int d,const A&t1)
{
    A ret;
    ret.x=d+t1.x;
    ret.y=d+t1.y;

    return ret;
}
main()
{
    A a1(100,200),a2;
    a2=100+a1;

    a2.print_data();
}

