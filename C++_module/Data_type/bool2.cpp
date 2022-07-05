#include<iostream>
using namespace std;
main()
{
    string s1("vector"),s2("vector");
    bool ret;
    cout << boolalpha;

    ret=s1==s2;
    cout << ret << endl;//true

    ret=s1>=s2;
    cout << ret << endl;//true

    ret=s1<s2;
    cout << ret << endl;//false

    ret=s1<=s2;
    cout << ret << endl;//true

    ret=s1!=s2;
    cout << ret << endl;//false

    ret=s1>s2;
    cout << ret << endl;//false
}
