#include<iostream>
using namespace std;
main()
{
    int *p,j,k,sum;
    p=new int[6];

    cout << "Enter Data" << endl;
    for(int i=0;i<6;i++)
    cin >> p[i];

    cout << "Before-";
    for(int i=0;i<6;i++)
     cout << p[i] << " ";
     cout << endl;

    for(j=0;j<6;j++)
    {   
        sum=0;
        for(k=1;k<p[j];k++)
        {
            if(p[j]%k==0)
            sum=sum+k;
        }

        if(sum==p[j])
         cout << "perfect-" << p[j] << " " <<endl;

        else if(sum>p[j])
          cout << "Abundent-"  << p[j] << " " << endl;
        
        else
            cout << "Dificient-" << p[j] << " " << endl;
    }
    delete []p;
}



         

