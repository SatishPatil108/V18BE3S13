#include<iostream>
using namespace std;
class A
{
mutable int x;// here mutable keyword applying only for x so we can modify x var. only
        int y;

        public :
            void set_data()
            {
                cout << "Enter Data" << endl;
                cin >> x >> y;
            }

         void print_data()
         const {
                  x=100;//modify the data is possible becoz using mutable keyword
                  y=300;// invalid to modify
                  cout << "x-" << x << " " << " y-" << y << endl;
                }
};

main()
{
    A a1;
    a1.set_data();
    a1.print_data();
}


