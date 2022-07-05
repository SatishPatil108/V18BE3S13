#include<iostream>
using namespace std;
main()
{
    int *p;
    p=new int;// new is operator it is use for allocating memory dynamically.
    cout << "Enter Data" << endl;
    cin >> *p;
    cout << "*p=" << *p << endl;
    delete p;//once we Dynamically allocating memory we must deallocate that memory.
}
