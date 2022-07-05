#include<iostream>
using namespace std;
class Base {
    public: int x;
    public:
            void setdata_Base(int a) {
                x = a;
            }
            void printdata_Base() {
                cout<<"x = "<<x<<endl; 
            }
};
class Derived:public Base  
    {       
            public: int m;
            void setdata_Derived(int a) {
                m = a; 
            }
            void printdata_Derived() { 
                cout<<"m = "<<m<<endl; 
            }
};
main()
{

    Base b;
    cout << "base - " <<sizeof(b) <<endl;
    cout << "x  - " << 100 <<endl;//we can assign the data directly becoz data member in public (b.x)
    b.setdata_Base(10);
    b.printdata_Base();
    //b.setdata_Derived(20); //invalid

    Derived d;
    cout << "Derived - " <<sizeof(d) <<endl;
    cout << "x  - " << d.x  <<endl;
    cout << "m  - " << d.m  <<endl;
    d.setdata_Base(10);
    d.setdata_Derived(20);
    d.printdata_Base();
    d.printdata_Derived();

}


