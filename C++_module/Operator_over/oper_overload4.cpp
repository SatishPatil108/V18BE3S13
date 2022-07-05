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
                cout << "x-" << x << " " << "y-" << y << endl;
            }

            friend A operator + (const A&,const A &);
};

 A operator + (const A &t1 , const A &t2)
 {
     A ret;
     ret.x=t1.x+t2.x;
     ret.y=t1.y+t2.y;

     return ret;
 }

main()
{
    A a1(10,20),a2(100,200),a3(1,2);
    A a4(1000,2000),a5;

    a5=a1+a2+a3+a4;
    a5.print_data();
}

