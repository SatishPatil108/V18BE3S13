#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
    int *p;
    public :
        A(int a,int b,int *s)
        {
            x=a,y=b,p=s;
        }
       A(A &t1)
       {
           p=new int;
           *p=*(t1.p);
       }

        
        void print_data()
        {
            cout << x << " " << y << " " << *p << endl;
        }
};
main()
{
    int p1=30;


    A a1(10,20,&p1),a2(a1);

    a1.print_data();
    cout << "*******************************************" << endl;
    
    a2.print_data();
}


