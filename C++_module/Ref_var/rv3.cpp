#include<iostream>
using namespace std;
main()
{
    int x=10,y=20;
    int *p=&x; // it will store address of x into *p

    int *&rp=p; // rp is reference variable of p
    
    cout << "*p=" << *p << endl;// it will print 10
    cout << "*rp=" << *rp << endl;//it will also print 10

    rp=&y; //pointer points to y i.e it will store address of y


    cout << "*p=" << *p << endl;// it will print 20
    cout << "*rp=" << *rp << endl;//it will also print 20


}




