#include<iostream>
using namespace std;
main()
    {
        char ch='A',ch1='B';
        cout << ch << " " << ch1 << endl; // A B
        cout << ch << ch1 << endl;// here it will print char without space i.e AB 
        cout << dec << ch << endl;//here we are trying to print dec but it will print A here we need to required type casting
        cout << (int)ch << " " << (int)ch1 << endl;//here we done the type casting and it will print dec format i.e 65 66
    }
