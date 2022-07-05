#include<iostream>
using namespace std;
main()
{
    char s[20];
    cout << "Enter the String" << endl;
    //cin >> s;
    cin.getline(s,20);// if we want read the Data with space
    cout << "String-" << s << endl;
}
