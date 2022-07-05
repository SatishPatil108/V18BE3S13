#include<iostream>
using namespace std;
main()
{
    int i,num,sum=0;
    cout << "Enter the Number" << endl;
    cin >> num;
    cout << "Number is-" << num << endl;
    while(num)
    {
      sum=sum*10+num%10;
      num/=10;
    }
    cout << "Reverse digit-" << sum <<endl;
}
