#include<iostream>
using namespace std;
main()
{
    string s("satishpatil"),s2(s);// at a time of declaration it will copy into another string
    cout << "string-" << s2 << endl;//satishpatil

    string s3("jonsnow"),s4;
    s4=s3;// in c++ is possible but in c is not possible
    cout << "string-" << s4 << endl;//jonsnow

    string s5("vector"),s6;
    s6="india";//in c++ is possible but in c is  not possible
    cout << "string-" << s6 << endl;//india

    string d1("vector"),d2("india"),d3;
    d3=d1+d2;//string concatination
    cout << "string-" << d3 << endl;//vectorindia


}
