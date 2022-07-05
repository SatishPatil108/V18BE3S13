#include<iostream>
using namespace std;
class C;
class B;
class A
{
    int x;
    public :
        void set_data()
        {
            cout << "Enter Data" <<endl;
            cin>>x;
        }

        friend void sum_data(A&a1,B&b1);
};

class B
{
    int x;
    public :
         void set_data()
         {
             cout<<"Enter Data"<<endl;
             cin>>x;
         }
        friend void sum_data(A&a1,B&b1);
};
class C
{    public:
        void sum_data(A&a1,B&b1)
        {  
            int d;
            d=a1.x+b1.x;        
            cout << "d=" <<d<<endl;
    
        }
};
main()
{
    A a1;
    B b1;
    C c1;
    a1.set_data();
    b1.set_data();
    c1.sum_data(a1,b1);

}
