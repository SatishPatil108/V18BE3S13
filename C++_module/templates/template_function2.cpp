#include<iostream>
using namespace std;
template<class T>
T area(T r)
{
    return 3.14*r*r;
}
template<class T1,class T2>
double area(T1 l,T2 b)
{
    return l*b;
}
main()
{
    cout << area(10) << endl;
    cout << area('a') <<  endl;
    cout << area(10,5.3) <<endl;
    cout << area(10.2,3.1) <<  endl;
}

