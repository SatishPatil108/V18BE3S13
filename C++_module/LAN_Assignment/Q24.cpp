#include<iostream>
using namespace std;
class A
{
    int a[5];
    public:
    int& operator [](int I)
    {
        return a[I];
    }
};
main()
{
    A a1;
    cout<<"Enter data" << endl;
    for(int i=0;i<5;i++)
    cin>>a1[i];

    for(int i=0;i<5;i++)
    cout<<a1[i]<<" ";

    cout << endl;
}

