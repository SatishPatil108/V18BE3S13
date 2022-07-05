#include<iostream>
using namespace std;
struct st
{
    void test()
    {
        cout << "Jon Snow" << endl;
    }
};

main()
{
    struct st s;
    s.test();
    cout << "size-" << sizeof s << endl;
}

