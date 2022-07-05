#include<iostream>
using namespace std;
class A
{
    int m;
    int n;

    public :
        void set_data(int a,int b)
        {
            m=a,n=b;
        }

        void print_data()
        {
            cout << "m-" << m << " " << "n-" << n << endl;
        }
};

main()
{
    A c1,c2,c3;
    c1.set_data(10,20);
    c1.print_data();
 
    c2.set_data(100,200);
    c2.print_data();

    c3.set_data(1000,2000);
    c3.print_data();
}
