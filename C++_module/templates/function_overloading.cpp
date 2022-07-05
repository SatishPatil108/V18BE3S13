#include<iostream>
using namespace std;
void swap_data(int &a,int &b)
{
    int t;
    t=a,a=b,b=t;
}

void swap_data(float &a,float &b)
{
    float t;
    t=a,a=b,b=t;
}
void swap_data(char &a,char &b)
{
    char t;
    t=a,a=b,b=t;
}

main()
{
    int x=10,y=20;
    float p=12.6,q=23.5;
    char ch1='A',ch2='B';
    
    cout << "x=" << x  << " " << "y=" << y << endl;
    cout << "p=" << p  <<  " " << "q=" << q << endl;
    cout << "ch1=" << ch1 << " " << "ch2=" << ch2 << endl;
    
    cout << "******************************" << endl;

    swap_data(x,y);
    swap_data(p,q);
    swap_data(ch1,ch2);
    cout << "x=" << x  << " " << "y=" << y << endl;
    cout << "p=" << p  <<  " " << "q=" << q << endl;
    cout << "ch1=" << ch1 << " " << "ch2=" << ch2 << endl;
}

