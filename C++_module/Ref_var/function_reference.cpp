#include<iostream>
using namespace std;
int & test()
{
    static int k=100;
    cout << "k="<< k<< endl;
    return k;
}

main()
{
    int x=10;
    test()=x;
    test();
}
