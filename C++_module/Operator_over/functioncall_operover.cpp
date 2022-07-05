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

            void print_data()
            {
                cout << "x-" << x << " " << "y-" << y << endl;
            }
           
            void operator ()(int a,int b)
            {
                cout << "function overloading" << endl;
                x=a,y=b;
            }
};

main()
{
    A a1;
    a1(100,200);
    a1.print_data();

}
