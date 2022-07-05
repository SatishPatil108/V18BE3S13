#include<iostream>
using namespace std;
main()
{
    float f=23.5;

    cout << f << endl; // as it is print =23.5
    cout << fixed << f << endl;//it will print in float =23.500000
    cout << scientific << f << endl;//it will print expoential =23.500000e+1
}
