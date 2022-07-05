#include<iostream>
using namespace std;
class A
{
    int x,y,*p;
    public :
         A(){
             p=new int;
         }

        void set_data(int a,int b,int c)
        {
            x=a,y=b,*p=c;
        }
        void print_data()
        {
            cout << "x=" << x << " ";
            cout << "y=" << y << " ";
            cout << "*p=" << *p << endl;
        }
        
        A(A &temp)
        {
            x=temp.x,y=temp.y,p=temp.p;
        }
       void modify()
       {
           *p=50;
       }
};
main()
{
    A a1;
    a1.set_data(10,20,30);
    A a2=a1;
   
    a1.print_data();
    a2.print_data();
    a2.modify();
    cout<<"*************************"<< endl;
    a1.print_data();
    a2.print_data();
}
   
