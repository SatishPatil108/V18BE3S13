#include<iostream>
using namespace std;
class A
{
    int x,y;
        public:
            A(){
                x=0,y=0;
            }

            A(int a,int b){
            x=a,y=b;
            }

            void print_data()
            {
                cout << "x=" << x << " " << "y=" << y << endl;
            }
        A operator - ()
        {
            A temp;
            temp.x=-x;
            temp.y=-y;
             return temp;
        }

};
main()
{
    A a1(100,200),a2=-a1;
    //a2=-a1;
    a1.print_data();
    cout << "****************************" << endl;
    a2.print_data();
}
