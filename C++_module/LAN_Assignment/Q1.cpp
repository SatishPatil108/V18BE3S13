#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
main()
{
    int x,y;
    cout << "enter the two no"  <<  endl;
    cin >> x >> y;

    cout << "Before-" << x << " " << y << endl;

    swap(x,y);

    cout << "After- " << x << " " << y << endl;
}

