#include<iostream>
using namespace std;
main()
{
    int *a;
    a=new int[5];
    cout << "Enter Data" << endl;
    for(int i=0;i<5;i++)
        cin >> a[i];
    
    cout << "Before-";
    for(int i=0;i<5;i++)
    cout << a[i] << " ";
    cout << endl;

    int j,k,t;
/*    for(j=0;j<5;j++)
    {
        for(k=0;k<5-1-j;k++)
        {
            if(a[k]>a[k+1])
            {
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
  */
    for(int j=0;j<5;j++)
    { 
        for(int k=0;k<5;k++)
        { 
            if(a[k]>a[j])
            {
                t=a[k];
                a[k]=a[j];
                a[j]=t;
            }
        }
    }


    cout << "After -";
    for(int j=0;j<5;j++)
        cout << a[j] << " ";
        cout << endl;
        delete []a;
}
