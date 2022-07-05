#include<iostream>
using namespace std;
int division(int a,int b)
{
    if(b==0)
        throw "Divide by Zero";
    else
    {
        return a/b;
    }
}

main()
{
    int x,y,div;
    cout << "Enter the x value" << endl;
    cin >> x;
l1:
    cout << "Enter the Y value" <<  endl;
    cin >> y;
    
    try
    {
     div=division(x,y);
     cout << "Result=" << div << endl;
    }
    catch (const char *str)
    {
      cout <<"in catch:";
      cout << str <<  endl;
      goto l1;
    }
}

