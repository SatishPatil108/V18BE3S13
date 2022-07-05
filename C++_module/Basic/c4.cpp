#include<iostream>
using namespace std;
main()
{
        int x=15;
  //    int x(100);

      cout << showpos;// it will print with sign
      cout << "x=" << x << endl;
      cout << showbase; // use for print the data in base format
      cout << uppercase;//to print the data in upper case


      cout << hex << x << endl;// hexadecimal format
      cout << oct << x << endl;// octal format
       
      int y=14;
      cout << "y=" << y << endl; //last flag will be consider i.e octal
      cout << noshowpos; // here will reset the flag for print normal
      cout << nouppercase;//reset the uppercase flag
      cout << noshowbase;// reset the showbase flag
      cout << "y=" << dec << y << endl; // here we reset the flag i.e octal flag
      cout << hex << y << endl;
      
}
      
