#include<iostream>
using namespace std;
class A
{
    public:
};
class B:public A
{
   int y;
};
main()
{
   A a1;
   B b1;
   cout << sizeof a1 << endl;
   cout << sizeof b1 << endl;
}
