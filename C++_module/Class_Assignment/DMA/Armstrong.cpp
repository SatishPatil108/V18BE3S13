#include<iostream>
using namespace std;
main()
{
    int *p,sum,r=0;
    p=new int[6];

    cout << "Enter Data" << endl;
    for(int i=0;i<6;i++)
    cin >> p[i];

    cout << "Before-" << endl;
    for(int i=0;i<6;i++)
    cout << p[i] << " ";    
    cout << endl;
   
     for(int j=0;j<6;j++)
     {   
         sum=0;
         for(int k=p[j];k>0;k/=10)
         {
            r=k%10;
            sum=sum+r*r*r;
         }

         if(sum==p[j])
          cout << p[j] << " ";    
     }
     cout << endl;
}


