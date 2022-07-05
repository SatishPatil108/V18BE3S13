#include<iostream>
using namespace std;
float Area_RTS(int p,float q)
{
    float AR;
    AR=p*q;
    return AR;

}
float Area_RTS(float a,float b)
{
    float AT;
    AT=((0.5)*a*b);
    return AT;

}

float Area_RTS(float r2)
{
    float AS;
    AS=4*(3.14)*r2*r2;
    return AS;
}
main()
{
    float  l,w,A1,A2,A3,h,b,r;
    cout << "Enter the length and width" << endl;
    cin>>l>>w;

    cout << "Enter the height and Base" << endl;
    cin>>h>>b;
    
    
    cout << "Enter the radius of circle" << endl;
    cin>>r;
    
    A1=Area_RTS(l,w);
    cout << "Area of Rectangle-" << A1 << endl;

    A2=Area_RTS(h,b);
    cout << "Area of Triangle-" << A2 << endl;

    A3=Area_RTS(r);
    cout << "Area of Sphere-" << A3 << endl;

}


