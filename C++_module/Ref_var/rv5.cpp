#include<iostream>
using namespace std;
main()
{
 /*  int x;//array of References not possible
     int y;
     int (&ra)[10]={x,y};
 */

    int a[5]={10,20,30,40,50};
    //int (&ra)[3]=a; //invalid Because size should be equal or match
    
    int (&ra)[5]=a;

    for(int i=0;i<5;i++)
//    cout<<ra[i]<<endl;
    cout << "a["<<i<<"]="<<ra[i]<<endl;
}
