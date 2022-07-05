#include<iostream>
using namespace std;
class A
{
    int roll;
    char name[10];
    float marks;

    public:
        void set_data()
        {
            cout << "Enter roll name marks"  << endl;
            cin >> roll>>name>>marks;
        }

        void print_data()
        {
           
            cout<< p[i]->roll << " " << p[i]->name <<" " <<p[i]->marks <<endl;
           
        }
};
main()
{
    A a1;
    int n;
    int **p;

    cout<<"Enter the n" << endl;
    cin>>n;

    p=new int *[n];
     
    for(int i=0;i<n;i++)
        p[i]=new int[3];

    for(int i=0;i<n;i++)
    { 
        a1.set_data();
    }
cout <<"***************************************"<< endl;
    for(int i=0;i<n;i++)
    {
        a1.print_data();
    }
}



