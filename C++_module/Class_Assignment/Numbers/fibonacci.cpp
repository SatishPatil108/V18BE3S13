#include<iostream>
using namespace std;
main()
{
    int i,a=0,b=1,c,num;
    cout << "Enter upto you want required the fibonacci series"<< endl;
    cin >> num;

    cout << a << " " << b << " ";
    for(i=2;i<=num;i++)
    {
        c=a+b;
        cout << c << " ";
        a=b;
        b=c;
    }

    cout << endl;
}
