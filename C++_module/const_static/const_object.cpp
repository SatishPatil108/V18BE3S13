#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
        public:
  
           A()
           {
               x=10,y=20;
           }
    
        
            void set_data()
            {
                cout << "Enter Data" << endl;
                cin >> x >> y;
            }            
            void print_data() const;
};
  void A :: print_data()
    const {
            cout << "x-" << x << " " << "y-" << y << endl;
          }
main()
{
    A a1;
    const A a2;
   // a2.set_data ();//a2 is const cant not be modify
    a2.print_data();

    a1.set_data();
    a1.print_data();
}
