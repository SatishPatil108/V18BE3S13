#include<iostream>
using namespace std;
bool iseven(int n)
{
    if(n%2==0)
        return true;
    else
        return false;
}

main()
{
    int num;
    cout << "Enter data" << endl;
    cin >> num;
    cout << boolalpha;
    cout << iseven(num) << endl;
}

