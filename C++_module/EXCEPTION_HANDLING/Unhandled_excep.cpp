#include<iostream>
using namespace std;
main()
{
    try
    {
        throw "Unhandled";
    }
    catch(int X)
    {
        cout << "in catch:" << endl;
    }
}
