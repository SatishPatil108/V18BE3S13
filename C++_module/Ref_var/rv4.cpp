#include<iostream>
using namespace std;
main()
{
    int x=10;

    int &rv1=x;//one variable multiple references is possible
    int &rv2=x;
    int &rv3=x;

    cout<<"rv1="<<rv1<<endl;//it will print 10
    cout<<"rv2="<<rv2<<endl;//10
    cout<<"rv3="<<rv3<<endl;//10

    int *p=&x;//it will store address x into *p
    int y=20;

    int *&rp1=p;// one pointer variable multiple reference possible
    int *&rp2=p;
    int *&rp3=p;
  
   
    cout<<"*p="<<*p<<endl;//it will print 10
    cout<<"*rp1="<<*rp1<<endl;//10
    cout<<"*rp2="<<*rp2<<endl;//10
    cout<<"*rp3="<<*rp3<<endl;//10
    
    rp1=&y;//pointer will points to y

    cout<<"*p="<<*p<<endl;//it will print 20
    cout<<"*rp1="<<*rp1<<endl;//20
    cout<<"*rp2="<<*rp2<<endl;//20
    cout<<"*rp3="<<*rp3<<endl;//20
  
}

