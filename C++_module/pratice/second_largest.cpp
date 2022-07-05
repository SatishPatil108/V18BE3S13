#include<iostream>
using namespace std;
main()
{
    int a[5],i,j,l,sl;
    cout << "Enter Array element" << endl;
    for(i=0;i<5;i++)    
    cin>>a[i];

    cout << "Before-";
    for(i=0;i<5;i++)
    cout<<a[i]<< " ";    
    cout << endl;

    for(j=0;j<5;j++)
    {
        if(a[0]>a[1])
        {
            l=a[0];
            sl=a[1];
        }
        else
        {
            l=a[1];
            sl=a[0];
        }

        for(j=2;j<5;j++)
        {
           if(a[j]>l) 
           {
               sl=l;
               l=a[j];
           }
           else if(a[j]>sl)
           {
               sl=a[j];
           }
        }

    }
        cout << "largest="<< l <<" "<< "second largest=" << sl << endl;
    
}
