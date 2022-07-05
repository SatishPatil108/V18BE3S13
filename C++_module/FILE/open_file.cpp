#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
    char s[20];

    if(argc!=2)
    {
        cout << "Usage:./a.out finame" << endl;
        return 0;
    }

    ifstream fin;
    fin.open(argv[1]);
    
    if(fin.fail())
    {
        cout << "File not found" << endl;
        return 0;
    }
    
    fin.getline(s,20);
    cout << s <<endl;

    fin.close();
}
