#include<iostream>
using namespace std;
main()
{
    int i,j,sum,r=0;
    
    for(i=1;i<=1000;i++)
    {
        sum=0;
        for(j=i;j>0;j/=10)
        {
          r=j%10;
          sum=sum+r*r*r;
        }
        if(sum==i)
            cout << i << " ";
    }
    cout << endl;
}
