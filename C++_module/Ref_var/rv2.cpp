#include<iostream>
using namespace std;
main()
{
    int x=10,y=30;
    int &rv=x; // rv alias name of x variable
  
    //int &rv2=rv;// reference to reference not possible(physically not possible but logically possible)
    
    //int &rv=y; // in it's life time reference variable it can refer only one variable
 

    //int &rv2;  // invalid Because of reference variable must be initialized
    
    //int &rv3=10; //invaild Because of reference variable must be initialized with variable only not an constant
    
    //int &rv3=0;  // NULL reference will not possible
    

    rv=y; // in rv variable content of y will copy
    

    cout << "rv=" << rv << endl; // it will print 30

    cout << "x=" << x << endl; // it will also print 30 
                                //becoz of here (rv=y) content of y copy into rv i.e it will copy also in x both variable address is same
}


