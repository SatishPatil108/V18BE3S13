#include<iostream>
#include<typeinfo>//must include header file for runtime identification
using namespace std;
template<typename Type>
void swap_data(Type &a,Type &b)
{
    Type t;
    cout << typeid(a).name() << endl;// Runtime type identification
    t=a,a=b,b=t;
}


main()
{
    int x=10,y=20;
    float p=12.6,q=23.5;
    char ch1='A',ch2='B';
    
    cout << "x=" << x  << " " << "y=" << y << endl;
    cout << "p=" << p  <<  " " << "q=" << q << endl;
    cout << "ch1=" << ch1 << " " << "ch2=" << ch2 << endl;
    
    cout << "******************************" << endl;

    swap_data(x,y);
    swap_data(p,q);
    swap_data(ch1,ch2);
    cout << "x=" << x  << " " << "y=" << y << endl;
    cout << "p=" << p  <<  " " << "q=" << q << endl;
    cout << "ch1=" << ch1 << " " << "ch2=" << ch2 << endl;
}

