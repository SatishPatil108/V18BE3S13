#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
        public:
            A(){}
            A(int a,int b):x(a),y(b){}

            void print_data()
            {
                cout << "x=" << x << " " << "y=" << y << endl;
            }

            friend A operator + (const A&,const A&);
            friend A operator * (const A&,const A&);
            friend A operator - (const A&,const A&);
};
A operator * (const A&t1,const A&t2)
{
    A mul;
    mul.x=(t1.x)*(t2.x);
    mul.y=(t1.y)*(t2.y);
                
    return mul;
}
A operator + (const A&t3,const A&t4)
{
    A add;
    add.x=t3.x+t4.x;
    add.y=t3.y+t4.y;

    return add;
}

A operator - (const A&t5,const A&t6)
{
    A sub;
    
    sub.x=t5.x-t6.x;
    sub.y=t5.y-t6.y;

    return sub;
}
main()
{
    A a1(10,20),a2(4,5),a3(10,20);
    A a4(100,200),a5;

    a5=a1+(a2)*(a3)-a4;

    a5.print_data();

}
