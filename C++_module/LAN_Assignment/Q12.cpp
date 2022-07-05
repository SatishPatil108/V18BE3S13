#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int x;

    public :
        void set_data()
        {
            cout << "Enter data" << endl;
            cin>>x;
        }

        friend addition(A &a1,B &b1);
};

class B 
{
    int y;

    public :
        void set_data()
        {
            cout << "Enter data" << endl;
            cin>>y;
        }

        friend addition(A &a1,B &b1);
};
class C
{
    public:
        addition(A &a1,B &b1)
        {
            int sum;
            sum=a1.x + b1.y;
            return sum;
        }

}
main()
{
    A a1;
    B b1;
    a1.set_data();
    b1.set_data();
    c1.addition();

    c1.print_data();
