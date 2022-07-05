#include<iostream>
using namespace std;
int x=200;
main()
{
    int x=100;
    cout <<"x local="<< x <<endl;

    cout <<"x global="<< :: x <<endl;//using scope resolution operator we can access global variable of data
}
