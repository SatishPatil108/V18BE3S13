#include<iostream>
using namespace std;
main()
{
    int *p,sum,r;
    p=new int[6];

    cout << "Enter Data" << endl;
    for(int i=0;i<6;i++)
    cin >> p[i];
   
    cout << "Before-";
     for(int i=0;i<6;i++)
     cout << p[i] << " ";
     cout << endl;
   
     for(int j=0;j<6;j++)
     {
         sum=0;
         r=0;
         for(int k=p[j];k>0;k/=10)
         {   
             r=k%10;
             sum=sum*10+r;
         }
         p[j]=sum;
         cout << p[j] << " ";
     }
     cout << endl;
}



