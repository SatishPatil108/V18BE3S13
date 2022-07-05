#include<iostream>
using namespace std;
class Deep
{
    int a,b,*p;
     public:
        Deep(){
            p=new int;
        }
        
        void set_data(int x,int y,int z)
        {
            a=x,b=y,*p=z;
        }

        void print_data()
        {
            cout << "a="<< a << " ";
            cout << "b="<< b << " ";
            cout << "*p="<< *p << endl;
        }

        Deep(Deep &temp)
        {
            a=temp.a,b=temp.b;
            p=new int;
            *p=*(temp.p);
        }

        void modify()
        {
            *p=500;
        }

};
main()
{
    Deep a1;
    a1.set_data(100,200,300);
    Deep a2=a1;
    a1.print_data();
    a2.print_data();
    a2.modify();
    cout << "**************************" <<  endl;
    a1.print_data();
    a2.print_data();
}


