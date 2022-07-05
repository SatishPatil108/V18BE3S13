#include<iostream>
using namespace std;
main()
{
    int num,sum=0,product=1,r;
    cout << "Enter Number" << endl;
    cin >> num;
    while(num)
    {  
        r=num%10;
        if(r%2==0)
            sum=sum+r;
        else
            product=product*r;
        num/=10;
    }
    cout << "Sum of even digit is = " << sum << endl;
    cout << "product of odd digit is = "<< product << endl;
}
