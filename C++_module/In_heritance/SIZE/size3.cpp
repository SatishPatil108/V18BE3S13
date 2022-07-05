#include<iostream>
using namespace std;
class A
{
  int x;
};
class B:public A
{
    public:
};
main()
{
   A a1;
   B b1;
   cout << sizeof a1 << endl;
   cout << sizeof b1 << endl;
}
