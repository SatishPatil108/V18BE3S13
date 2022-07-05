#include<iostream>
using namespace std;
main()
{
    int *p,j,m,n;
    p=new int[7];

    cout << "Enter Data" <<endl;
    for(int i=0;i<7;i++)
        cin >> p[i];

    cout << "Array element-";
    for(int i=0;i<7;i++)
        cout << p[i] << " ";
    cout << endl;

    for(j=0;j<7;j++)
    {
        if(p[0]<p[1])
        {
            m=p[1];
            n=p[0];
        }
        else
        {
            m=p[0];
            n=p[1];
        }

        for(j=2;j<7;j++)
        {
            if(p[j]<m)
            {
                n=m;
                m=p[j];
            }
            else if(p[j]<n)
            {
                n=p[j];
            }

        }

    }
    cout << "smallest-" << m << " secondsmallest-" << n << endl;
    delete []p;
}


