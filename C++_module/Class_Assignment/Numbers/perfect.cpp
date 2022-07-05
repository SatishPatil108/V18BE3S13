#include<iostream>
using namespace std;
main()
{
    int sum,i,j;
    for(int i=1;i<=25;i++)
    {   
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }
  
        if(sum==i)
        cout << "perfect no-"<< i << " " << endl; // 6  
        else if(sum>i)
        cout << "Abundent no-" << i << " " << endl;//12 18 20 24
        else
        cout << "Dificient no-" << i << " " << endl;//1-5,7-11,13-17,19,21-23,25

    }
    cout << endl;
}






