#include<iostream>
using namespace std;
class A
{
    int x;
    int y;
        public :
          void set_data(int a,int b);
          friend void print_data(A&);
};

void A:: set_data(int a,int b)
{
    x=a,y=b;
}

void print_data(A &a1)
{
    cout << "x-" << a1.x << " ";
    cout << "y-" << a1.y << endl;
}
      
 main()
{
    A a1;
    a1.set_data(10,20);
    print_data(a1);
  //  cout << a1.x << " " << a1.y << endl;
}
    
    
    
 
