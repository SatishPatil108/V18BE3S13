#include<iostream>
using namespace std;
main()
{
    int *p,j,sum=0,product=1;
    p=new int[8];

    cout << "Enter Data" << endl;
    for(int i=0;i<8;i++)
        cin >> p[i];
    
    cout << "Before-";
    for(int i=0;i<8;i++)
    cout << p[i] << " ";
    cout << endl;

    for(j=0;j<8;j++)
    {
        if(p[j]%2==0)
            sum=sum+p[j];

        else
            product=product*p[j];
    }

    cout << "sum-" << sum << " " << "product-" << product << endl;
    delete []p;
}
