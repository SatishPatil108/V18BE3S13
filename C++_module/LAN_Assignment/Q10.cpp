#include<iostream>
using namespace std;
class B;//forword declaration
class A
{
    int x;
    public:
    void set_data()
    {
      cout << "Enter no" << endl;
      cin>>x;
    }

    friend void swap_data(A &a1,B &b1);

    void print_data()
    {
      cout << "x=" << x << endl;
    }

};

class B 
{
    int y;
    public:
    void set_data()
    {
        cout << "Enter no"  << endl;
        cin >> y;
    }

   friend void swap_data(A &a1,B &b1);
  void print_data()
  {
      cout << "y=" << y << endl;
  }
};
void swap_data(A &a1,B &b1)
{
    int t;
    t=a1.x;
    a1.x=b1.y;
    b1.y=t;
}



main()
{
    A a1;
    B b1;
    a1.set_data();
    b1.set_data();

    a1.print_data();
    b1.print_data();
    cout << "***********************************" << endl;
    swap_data(a1,b1);

    a1.print_data();
    b1.print_data();
}

 
