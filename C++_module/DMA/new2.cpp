#include<iostream>
using namespace std;
main()
{
    int *p;
    p=new int(10);//pointer initialize by 10 it will allocate  4bytes dma.
                 // it will allow in c++ (new operator is applicable) But not in c(malloc not allow).
    cout << "Enter Data" << endl;
    cin >> *p;
    cout << "*p=" << *p << endl;
    delete p;//deallocating 
}

