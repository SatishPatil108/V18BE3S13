#include<iostream>
using namespace std;
main()
{
    int *p,i,j,t,k;
   // p=new int[5]{10,20,30,40,50};
     
    p=new int[5];
     
    cout << "Enter Data" << endl;
    for(int n=0;n<5;n++)
        cin >> p[n];// Data taken from the user

    cout << "Before-";
    for(i=0;i<5;i++)
    cout << p[i] << " ";//print the data
    cout << endl;
   
   for(j=0,i=4;i>j;j++,i--)// sorting the Data in Reverse order
    {
        t=p[j];
        p[j]=p[i];
        p[i]=t;
    }
    cout << "After -";
    for(k=0;k<5;k++)
    cout << p[k] << " ";// print the Sort Data
    cout << endl;
   delete []p;
}
