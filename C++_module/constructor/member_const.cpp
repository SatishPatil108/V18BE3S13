#include<iostream>
using namespace std;
class A
{
    const int x;
    const int y;

        public :
           A():x(1000),y(2000)
           {
               cout << "Default" << endl;
           }

           A(int a,int b=200) :x(a),y(b)
            {
                //x=a,y=b;// Data member are const then go for memberwise initialization
                 cout << "Parametrized" << endl;
            }

           void print_data()
           {
               cout << x << " "  << y << endl;
           }
};
main()
{
    A obj1,obj2(555,444),obj3(25);
    obj1.print_data();
    obj2.print_data();
    obj3.print_data();
}

