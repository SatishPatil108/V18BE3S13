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
        cout <<"x=" << x << " ";
        cout <<"y=" << y << endl;
    }

    A operator --(int)
    {
        A temp;
        cout << "Post_decrement" << endl;
        temp.x=x;
        temp.y=y;
        x=x-1,y=y-1;
        return temp;
    }
    A operator --()
    {
        cout << "Pre_decrement" << endl;
        x=x-1;
        y=y-1;

        return *this;
    }
};
main()
{
    A a1(10,20),a2,a3(100,200),a4;
    //a2=a1--;
    a1.display_data();
    a2=--a1;
    a2.display_data();
    cout<<"**********************************************" << endl;
    a3.display_data();
    a4=a3--;
    a4.display_data();
}



