#include<iostream>
using namespace std;
int x=400;
main()
{
    int x=100;
    {
        int x=10;
        cout << "x local=" << x << endl;
        cout << "x global=" << :: x << endl;
    }
//        cout << "x local2=" << x << endl;
}
