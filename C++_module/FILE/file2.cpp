#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char s[20];
    ifstream fin("data");
//    fin>>s;
    fin.getline(s,20);
    cout << s << endl;
}
