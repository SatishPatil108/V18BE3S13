#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(){
        x=0,y=0;
    }
    A(int a,int b):x(a),y(b){}

    void display_data()
    {
        cout << "x=" << x <<" ";
        cout << "y=" << y <<endl;
    }

    A operator - ()
    {
      A ret;
      ret.x=-x;
      ret.y=-y;
      return ret;
    }
};
main()
{
    A a1(10,20),a2;

    a1.display_data();
    cout << "**************" << endl;
    a2=-a1;
    a2.display_data();
}
