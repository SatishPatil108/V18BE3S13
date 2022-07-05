#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
        public:
            A():x(1000),y(2000)
            {
                cout << "default" << endl;
            }

            A(int a,int b=500):x(a),y(b)
            {
                cout << "Parametrized" << endl;
            }

            A(A& temp)
            {
                cout << "copy constructor" << endl;
                x=temp.x;
                y=temp.y;
            }
            
            void print_data()
            {
                cout << x << " " << y << endl;
            }
};

main()
{
    A obj1,obj2(10,20);
    A obj3(obj2),obj4=obj3,obj5;
    obj5=obj3;

    obj1.print_data();
    obj2.print_data();
    obj3.print_data();
    obj4.print_data();
    obj5.print_data();
}
