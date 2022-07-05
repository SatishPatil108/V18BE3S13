#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
        public :
            A():x(1000),y(2000)
            {
                cout << "Default" << endl;
            }
            A(int a,int b=456):x(a),y(b)
            {  
               cout << "Parametrized"  << endl;
              //    x=a,y=b;// not possible for assignment then go for memberwise initialization 
            }          
            
            void print_data()
            {
              cout << x << " " << y << endl;
            }
};

main()
{
    A obj1,obj2(500,600),obj3(15);
    obj1.print_data();
    obj2.print_data();
    obj3.print_data();
}

