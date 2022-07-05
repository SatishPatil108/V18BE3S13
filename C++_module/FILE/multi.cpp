#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char **argv)
{
    if(argc!=5)
    {
        cout << "Usage:./a.out src d1 d2 d3" << endl;
        return 0;
    }
    char s[20];
    int i=0;
    ifstream fin;
    ofstream fout;
    fin.open(argv[1],ios::in);
    if(fin.fail())
    {
        cout << "File Not Found" << endl;
        return 0;
    }

    for(i=2;i<argc;i++)
    {
     fin.open(argv[1],ios::in);
     ofstream fout(argv[i],ios::out);
     while(fin.getline(s,20))    
     fout<<s<< endl;
     fin.close();
    }

}
