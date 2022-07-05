#include<iostream>
using namespace std;
class A
{
    public:
        int x;
        virtual void test1()
        {
            cout << "test1 in A" << endl;
        }
        virtual void test2()
        {
            cout << "test2 in A" << endl;
        }
        void test3()
        {
            cout << "test3 in A" << endl;
        }
};

class B:public A
{
 public:
     virtual void test2()
     {
         cout << "test1 in B" << endl;
     }
     void test3()
     {
         cout << "test2 in B" << endl;
     }
};
class C:public A
{
    public:
        virtual void test1()
        {
            cout << "test2 in C" << endl;
        }
        void test3()
        {
            cout << "test3 in C" << endl;
        }
};
main()
{
    A *ptr;
    A obj1;
    ptr=&obj1;
    ptr->test1();
    ptr->test2();
    ptr->test3();
    
    cout << "********************************" << endl;
    B obj2;
    ptr=&obj2;
    ptr->test1();
    ptr->test2();
    ptr->test3();

    cout << "********************************" << endl;
    C obj3;
    ptr=&obj3;
    ptr->test1();
    ptr->test2();
    ptr->test3();
}
