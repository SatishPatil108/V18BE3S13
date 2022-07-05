#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(){}
    A(int a,int b):x(a),y(b){}
   
    void display_data()
    {
        cout << "x= " << x << endl;
        cout << "y= " << y << endl;
    }
    friend A operator +(int p,const A &t1);
};
A operator + (int p,const A &t1)
{
        A ret;
        ret.x=p+t1.x;
        ret.y=p+t1.y;
        return ret;
}
main()
{
    A a1(10,20),a2;
    a2=100+a1;
    a2.display_data();
}
