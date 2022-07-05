#include<iostream>
using namespace std;
void swap_data(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
main()
{
    int x=10,y=20;
    
    cout<<"x="<<x<<" "<<"y="<<y<<endl;

    swap_data(x,y);

    cout<<"x="<<x<<" "<<"y="<<y<<endl;
}
