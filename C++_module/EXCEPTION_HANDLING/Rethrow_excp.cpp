#include<iostream>
using namespace std;
void test2()
{
    cout << "in test2" << endl;
    throw "user";
}
void test1()
{
    cout << "in test1" <<endl;
    try
    {
        test2();
    }
    catch(const char *str)
    {
        cout<<"customer" << endl;
        throw str;
    }
}
main()
{
    try
    {
        test1();
    }
    catch(const char *str)
    {
        cout << "higher" << endl;
        cout << str << endl;
    }
}

