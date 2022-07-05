#include<iostream>
using namespace std;
template<typename type1,typename type2>
class A
{
    type1 x;
    type2 ch;
    public:
        void set_data()
        {
            cout << "Enter Data" << endl; 
            cin >> x >> ch;
        }
        void print_data()
        {
            cout << "x=" << x << " ";
            cout << "ch=" << ch << endl;
        }
};
main()
{
    A<int,char>a1;
    A<float,int>a2;
    A<char,float>a3;

    a1.set_data();
    a2.set_data();
    a3.set_data();
    
    a1.print_data();
    a2.print_data();
    a3.print_data();

}
