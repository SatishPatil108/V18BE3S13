#include<iostream>
using namespace std;
main()
{
    int x,y,R;
    cout << "Enter the two no" << endl;
    cin >> x;

abc:
    cout << "enter the y" << endl;
    cin>>y;

    try
    {
        if(y==0)
        throw "Divide By zero";
      
        else
        {
        R=x/y;
        cout << "Result=" << R << endl;
        }
    }

    catch(const char *str)
    {
        cout << "in catch:"; 
        cout << str << endl;// Display the throw message
        goto abc;
    }
}
 
    
