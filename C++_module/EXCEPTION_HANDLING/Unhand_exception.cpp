#include<iostream>
using namespace std;
main()
{
    try
    {
        throw "satish";
    }
    catch(...)
    {
        cout << "in catch:" << endl;
    }
}
