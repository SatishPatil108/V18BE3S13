#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
    int *z;

    public:
     A()
     {
         z=new int;
     }

     void set_data(int a,int b,int c)
     {
         x=a;
         y=b;
        *z=c;
     }
     void print_data()
     {
         cout << "x="<<x<< " ";
         cout << "y="<<y<< " ";
         cout << "z="<<*z<<endl;
     }

     A(A &temp)
     {
         x=temp.x;
         y=temp.y;
         //z=temp.z;
         z=new int;
         *z=*(temp.z);
     }
     void modify()
     {
         *z=100;
     }
};
main()
{
    A a1;
    a1.set_data(10,20,30);
    A a2=a1;
    a1.print_data();
    a2.print_data();
    cout<<"************************************"<<endl;
    a1.modify();
    a1.print_data();
    a2.print_data();
}
