#include<iostream>
using namespace std;
class A;//forword declaration
class other
{
    public : 
        void print_data1(A &a1);
        void print_data1(A *a1);
        void print_data2(A a1);
};

class A
{
    int x;
    int y;
    public :
    void set_data(int a,int b);
    //friend void other ::print_data1(A*);// make this friend when print the data using pointer
    //friend void other ::print_data1(A &a2);// make this friend when print the data using reference var
    friend void other ::print_data2(A a1);// make this friend when print the data using reference var.
};
/******************defination of class A **********/
void A::set_data(int a,int b)
{
    x=a,y=b;
}

/****************** defination of class other **********************/
void other::print_data1(A *a1)//catch with pointer
{
//    cout << "x-" << a1->x << " ";
  //  cout << "y-" << a1->y << endl;
}

void other::print_data1(A &a2)//catch with another reference variable
{
    //cout << "x-" << a2.x <<" ";
    //cout << "y-" << a2.y << endl;
}
void other::print_data2(A a1)// catch with object
{
    cout << "x-" << a1.x << " ";
    cout << "y-" << a1.y << endl;
}
main()
{
    A a1;
    other o;
    a1.set_data(10,20);
    //o.print_data1(&a1);// passing the address
    o.print_data1(a1);// passing the object
    o.print_data2(a1);// passing the object
}
