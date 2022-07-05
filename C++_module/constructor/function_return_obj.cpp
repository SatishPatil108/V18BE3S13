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

A test(A t)
{
    A obj1,obj2;
    obj2=test(obj1);
}

main()
{
    A obj1,obj2;
    obj2=test(obj1);
}
