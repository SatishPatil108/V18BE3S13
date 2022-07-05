#include<iostream>
using namespace std;
main()
{
    string s;
    cout << "Enter the string" << endl;
   // cin >> s;
    getline(cin,s);//if we want read the data with space
    cout << "String-" << s << endl;
    cout << "size-" << sizeof s << endl;// size is always 4 byte 
                    //As per user point of view string is data type but internally it is class
                    // in class char pointer so pointer size always 4 byte
}
