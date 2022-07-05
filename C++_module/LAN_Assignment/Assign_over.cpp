#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
        A(){
            cout << "constructor A" << endl;
        x=0,y=0;
        }
        A(int a,int b):x(a),y(b){}
        void print_data()
        {
            cout << "x= " << x << " ";
            cout << "y= " << y <<endl;
        }
       A operator = (A &temp)
        {
            cout << "operator overloaded" << endl;
            x=temp.x;
            y=temp.y;
        }
};
main()
{
    A a1(10,20),a2;
    a1.print_data();
    cout << " ************************** "<< endl;
    a2=a1;
    a2.print_data();
}
                
          
