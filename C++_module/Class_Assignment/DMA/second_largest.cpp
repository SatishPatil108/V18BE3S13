#include<iostream>
using namespace std;
main()
{
    int *p,j,l,sl;
    p=new int[5];

    cout << "Enter the Data" << endl;
    for(int i=0;i<5;i++)
        cin >> p[i];

    cout << "Array element-";
    for(int k=0;k<5;k++)
        cout << p[k] << " ";
        cout << endl;

    for(j=0;j<5;j++)
    {
        if(p[0]>p[1])
        {
            l=p[0];
            sl=p[1];
        }
        else
        {
            l=p[1];
            sl=p[0];
        }


        for(j=2;j<5;j++)
        {
            if(p[j]>l)
            {
                sl=l;
                l=p[j];
            }
            else if(p[j]>sl)
            {
                sl=p[j];
            }
        }
    }
        cout << "largest-" << l << " "<<"secondlargest-"<<sl << endl;
        delete []p;
}
