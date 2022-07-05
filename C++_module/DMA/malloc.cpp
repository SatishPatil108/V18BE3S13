#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    int *p;
    p=(int*)malloc(sizeof(int));//(int*) -if we dont write the it will generate error 
                                   // because c++ follows strict type checking 
    cout << "enter data" << endl;
    cin >> *p;
    cout << "*p=" << *p << endl;
    delete p;//if we allocate memory dynamically memory must deallocate.
}
