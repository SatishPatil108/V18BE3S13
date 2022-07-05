#include<iostream>
using namespace std;
main()
{
    int *p,j,k;
    p=new int[6];

    cout << "Enter Data" << endl;
    for(int i=0;i<6;i++)
     cin >> p[i];

    cout << "Before-";
    for(int i=0;i<6;i++)
    cout << p[i] << " ";
    cout << endl;

   for(j=1;j<6;j++)
   {
     for(k=2;k<p[j];k++)
      {
          if(p[j]%k==0)
          break;
       }
      if(p[j]==k)
       cout << p[j] << " ";
   }
   cout << endl;
}

