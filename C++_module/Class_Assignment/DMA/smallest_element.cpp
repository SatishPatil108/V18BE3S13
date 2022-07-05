#include<iostream>
using namespace std;
main()
{
    int *p,S;
    p=new int[5];

    cout << "Enter the Data" << endl;
    for(int i=0;i<5;i++)
        cin >> p[i];
   
    cout << "Array Element-";
    for(int j=0;j<5;j++)
    cout << p[j] << " ";
    cout << endl;
    
    S=p[0];

    for(int i=0;i<5;i++)
    {
        if(S>p[i])
        S=p[i];
    }

    cout << "Smallest element-" << S << endl;
    delete []p;
}
