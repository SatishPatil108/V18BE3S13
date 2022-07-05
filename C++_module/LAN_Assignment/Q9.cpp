#include<iostream>
using namespace std;
class B;//forword decleration
class C;//forword decleration
class A
{
    int p,q; 
    public  :
            friend void set_data(A&,B&,C&);
            friend void print_data(A&,B&,C&);
};

class B
{
    int p,q;
    public  :
            friend void set_data(A&,B&,C&);
            friend void print_data(A&,B&,C&);
};

class C  
{
    int p,q;
    public  :
            friend void set_data(A&,B&,C&);
            friend void print_data(A&,B&,C&);
};

 void set_data(A&a1,B&b1,C&c1)
{
   cout<< "Enter DATA" << endl;
   cin>>a1.p>>a1.q>>b1.p>>b1.q>>c1.p>>c1.q; 
}
 void print_data(A&a1,B&b1,C&c1)
{
    cout << "THE DATA IS-" << endl;
    cout << a1.p<<" "<<a1.q<<" "<<b1.p<<" "<<b1.q<<" "<<c1.p<<" "<<c1.q<< endl;
}
main()
{
  A a1;
  B b1;
  C c1;
  set_data(a1,b1,c1);
  print_data(a1,b1,c1);

}
