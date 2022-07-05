#include<iostream>
using namespace std;
main()
{
    int *p,l;
    //p=new int[5]{11,34,26,67,55};
    p=new int[5];
    cout << "Enter Data" << endl;
    for(int j=0;j<5;j++)
    cin >> p[j];//Take the data from the user

    l=p[0];// storing the 1st element into l;
    for(int i=1;i<5;i++)
    {
        if(l<p[i])// here compare 1st element with all the remaining element
         l=p[i];// The data is greater then the 1st element then copy the data into l;
    }
    cout << "biggest element-" << l << endl;
    delete []p;
}
