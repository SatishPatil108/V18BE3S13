#include<iostream>
using namespace std;
main()
{
    int i,num,fact=1;
    cout << "Enter Number" << endl;
    cin >> num;

    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }

    cout << "factorial of num is = " << fact << endl;
}
