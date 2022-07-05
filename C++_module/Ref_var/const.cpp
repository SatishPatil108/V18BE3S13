#include<iostream>
using namespace std;
main()
{
    const int x=10;
    const int &rv=x;
   // int &rv2=x;//invalid
    cout<<"x="<<x<<endl;//10
}




/*
main()
{
    const int x=10;
    const int *p=&x;
    cout<<"x="<<x<<endl;//10
}
*/


/*
main()
{
    const int x=10;
    int *p;
    p=&x;//invalid
    cout<<"x="<<x<<endl;
}
*/
