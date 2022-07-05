#include<iostream>
using namespace std;
main()
{
    int *p,sum=0,j,k;
     p=new int[5];

     cout << "Enter Data" <<endl;
     for(int i=0;i<5;i++)
         cin >> p[i];
         
     cout << "Before-";
     for(int i=0;i<5;i++)
      cout << p[i] << " ";
      cout << endl;

     for(int i=0;i<5;i++)
         sum=sum+p[i];

     cout << "sum-" << sum << endl;
}
    

