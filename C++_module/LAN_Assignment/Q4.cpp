#include<iostream>
using namespace std;
float Area_R(float a,float b)
{
    cout << "Patil" << endl;
    float Area;
    Area=a*b;
    return Area;
}

float Area_R(int a=10,float b=20)
{
    float Area2;
    cout << "Default" << endl;
    Area2=a*b;
    return Area2;
}
main()
{
    float A1,A2,l,b;
    cout << "Enter width and Base" << endl;
    cin>>l>>b;

    A1=Area_R(l,b);
    A2=Area_R();

    cout << "AREA-" << A1 << endl;
    cout << "AREA-" << A2 << endl;
}





