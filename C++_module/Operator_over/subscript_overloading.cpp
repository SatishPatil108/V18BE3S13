#include<iostream>
using namespace std;
class A
{
    int a[5];

    public:
            int& operator[](int I)
            {
                cout<<"operator" << endl;
                return a[I];
            }
};
main()
{
    A q1;
    for(int i=0;i<5;i++)
    cin>>q1[i];
  
    cout<< "*******************************"<< endl;

   for(int i=0;i<5;i++)
    cout<<q1[i]<<endl;
}
