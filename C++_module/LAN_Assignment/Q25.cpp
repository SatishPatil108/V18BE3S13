#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(){
        x=0,y=0;
    }

    void display_data()
    {
        cout << "x=" << x << " ";
        cout << "y=" << y << endl;
    }

    A operator ()(int a,int b)
    {
        x=a,y=b;
    }
};
main()
{
    A a1;
    a1(100,200);
    a1.display_data();
}
