#include<iostream>
using namespace  std;
void swap(int &a,int &b)
{
    int t=0;
    t=a;
    a=b;
    b=t;

}
void swap(float &p,float &q)
{
    float t=0;
    t=p;
    p=q;
    q=t;

}
void swap(char &ch3,char &ch4)
{
    char ch;
    ch=ch3;
    ch3=ch4;
    ch4=ch;

}

main()
{
    int x,y;
    cout << "Enter the two int no" << endl;
    cin>>x>> y;
    
    float j,k;
    cout << "Enter the two float no" << endl;
    cin>>j>>k;
    

    char ch1,ch2;
    cout << "Enter the two character" << endl;
    cin>>ch1>>ch2;
    
    cout << "integer swap" << endl;
    cout << "After -" << x << " " << y << endl;
    swap(x,y);
    cout << "Before-" << x << " " << y << endl;


    cout << " float swap" << endl;
    cout << "Before-" << j << " " << k << endl;
    swap(j,k);
    cout << "After -" << j << " " << k << endl;

    cout << "character swap" << endl;
    cout << "Before-" << ch1 << " " << ch2 << endl;
    swap(ch1,ch2);
    cout << "After -" << ch1 << " " << ch2 << endl;
}
