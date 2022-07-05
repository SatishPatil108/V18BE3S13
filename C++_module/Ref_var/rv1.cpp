#include<iostream>
using namespace std;
main()
{
    int x=10;
    int &rv=x;// '&' it is used provide alias name existing variable(duplicate name)
    cout << "rv=" << rv << endl; 
    
    cout << (unsigned) &x << endl;// it will print address 
    
    cout << (unsigned) &rv << endl;// it will print address (both variable (x,rv) address is same )
                                    // reference variable change only name not an address
}
