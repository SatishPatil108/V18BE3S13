#include<iostream>
using namespace std;
//template<class Type1,class Type2,class Type3=double>
//Type3 sum(Type1 a,Type2 b)
template<class Type1,class Type2>
double sum(Type1 a,Type2 b)

{
    return a+b;
}
main()
{
    cout << sum(10,35.6f) << endl;
    cout << sum(23.4,'A') << endl;
    cout << sum('a',23.6f) << endl;
}
