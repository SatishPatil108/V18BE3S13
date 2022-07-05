#include<iostream>
using namespace std;
main()
{
    int *p,j,k,t;
    p=new int[5];

    cout << "Enter the data"  << endl;
    for(int i=0;i<5;i++)
        cin >> p[i];

    cout << "Before-";
    for(int i=0;i<5;i++)
        cout << p[i] << " ";
    cout << endl;

    for(j=0;j<5;j++)
    {
        for(k=0;k<5-1-j;k++)
        {
            if(p[k]<p[k+1])
            {
                t=p[k];
                p[k]=p[k+1];
                p[k+1]=t;
            }
        }
    }

    cout << "After -";
    for(int i=0;i<5;i++)
        cout << p[i] << " ";
    cout << endl;
    delete []p;

}
