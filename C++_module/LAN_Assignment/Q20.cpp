#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(){
        x=0;
    }
    A(int a):x(a){}
    void display_data()
    {
        cout << "x =" << x << endl;
    }


    A operator ++()
    {
        cout << "pre_increment" << endl;
        x=x+1;
        A temp;
        temp.x=x;
        return temp;
    }

    A operator ++(int)
    {
        cout << "post_increment" <<endl;
        A temp;
        temp.x=x;
        x=x+1;
        return temp;
    }
};
main()
{
    A a1(20),a2;
    a2=a1++;
    //a2=++a1;
    a1.display_data();
    cout <<"***********************" <<endl;
    a2.display_data();
}

