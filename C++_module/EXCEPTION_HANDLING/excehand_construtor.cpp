#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        cout << "constructor A" << endl;
        throw 100;
    }
    ~A(){
       cout << "Destructor A" << endl;
      }
};
main()
{
    try
    {
    A a1;
    cout << "Success" << endl;
    }
    catch(int a)
    {
        cout << "in catch:  " << a << endl;
    }
}

