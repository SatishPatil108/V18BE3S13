#include<iostream>
using namespace std;
class A
{
    int x,y;
        
friend istream& operator >> (istream& in,A&);
friend ostream& operator << (ostream& out,A&);
};


istream& operator >> (istream& in,A&t)
{
    cout << "Enter Data" <<  endl;
    in >> t.x >> t.y;
    return in;
}

ostream& operator << (ostream& out,A&t)
{
    cout << "Display Data" << endl;
    out << "x=" << t.x << " " << " y=" << t.y << endl;

    return out;
}
main()
{
    A a1;
    cin>>a1;
    cout<<a1;
}

