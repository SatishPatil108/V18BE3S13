#include<iostream>
using namespace std;
main()
{
    int i,j,Min,Max,c;
    cout << "Enter the Min & Max" << endl;
    cin>>Min>>Max;

    for(i=Min;i<=Max;i++)
    {
      c=0;
      for(j=1;j<=i;j++)
      {
         if(i%j==0) 
         c++;
      }
      if(c==2)
      cout << i << " " ;

    }

      cout << endl;
}
         
              

