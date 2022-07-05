#include<iostream>
using namespace std;
template<typename king>
class A
{
    king a[5];
    public:
    void set_data();
    void print_data();
};

template<typename Type>
void A<Type>::set_data()
{
    cout << "Enter Data" << endl;
    for(int i=0;i<5;i++)
    cin>>a[i];
}

template<typename Type>
void A<Type>::print_data()
{
    for(int i=0;i<5;i++)
    cout << a[i] << " ";
    cout << endl;
}
main()
{
    A<int>a1;
    a1.set_data();
    a1.print_data();

    A<char>a2;
    a2.set_data();
    a2.print_data();
}
