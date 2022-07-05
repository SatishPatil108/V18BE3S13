#include<iostream>
using namespace std;
class A
{
    int x,y;
        public:
       A()
        {
            x=0,y=0;
        }

        A(int a,int b)
        {
           x=a,y=b;
        
        }
        A operator = (A &temp)
        {
            cout << "operator overloaded" << endl;
            x=temp.x;
            y=temp.y;
        }
       
        void print_data()
        {
            cout << "x-" << x << " " << "y-" << y << endl;
        }
};
main()
{
    A a1(10,20),a2;
    a2=a1;// obj1 ie a1 data is copy into a2
    a1.print_data();// print the a1 data
    a2.print_data();
}

        

