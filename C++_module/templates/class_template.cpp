#include<iostream>
using namespace std;
template<typename Type>
class A
{
    Type a[5];
    public:
        void set_data()
        {
            cout << "Enter Data" << endl;
            for(int i=0;i<5;i++)
            cin >>a[i];
        }

        void print_data()
        {
            for(int i=0;i<5;i++)
            cout << a[i] << " ";
            cout << endl;
        }
};
main()
{
    A<int>a1;//declaration of object for template class(for int)
    a1.set_data();
    a1.print_data();
    
    A<char>a2;// declaration of object for templates class(for char)
    a2.set_data();
    a2.print_data();
}
