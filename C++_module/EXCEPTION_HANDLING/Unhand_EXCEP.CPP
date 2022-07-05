#include<iostream>
using namespace std;
void test()
{
    cout << "Winter Is Coming" << endl;
    cout << "STARK House" << endl;
}
main()
{
    try
    { 
        set_terminate(test);
        throw"unhandled";
    }
    catch(int x)
    {
       cout << "in catch:" << endl;
    }
}
