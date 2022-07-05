#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(){
        x=0,y=0;
    }
    A(int a,int b):x(a),y(b){}
    void display_data()
    {
        cout << "x=" << x << " " << "y=" << y <<endl;
    }
    friend A operator + (const A&t1,int a);
};
A operator + (const A&t1, int a)
{
    A ret;
    ret.x=t1.x+a;
    ret.y=t1.y+a;
    return ret;
}
main()
{
    A a1(100,200),a2;
    a2=a1+300;
    a2.display_data();
}
