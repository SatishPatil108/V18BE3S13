#include<iostream>
using namespace std;
class A
{
    int x,y;
        public :
            A(){}
            A(int a,int b):x(a),y(b){}
        
            void print_data()
            {
                cout << "x=" << x << " " << "y=" << y << endl;
            }

            friend A operator + (const A&,int);
};
A operator + (const A &t1,int d)
{
    A ret;
    ret.x=t1.x+d;
    ret.y=t1.y+d;

    return ret;
}
main()
{
    A a1(10,20),a2;
    a2=a1+100;
    a2.print_data();
}
