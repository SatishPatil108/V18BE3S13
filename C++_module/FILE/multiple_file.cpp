#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char**argv)
{
    if(argc!=3)
    {
        cout<<"Usage:./a.out src dest" <<endl;
        return 0;
    }
    char s[20];
    ifstream fin;
    fin.open(argv[1],ios::in);
    ofstream fout(argv[2]);

    if(fin.fail())
    {
        cout <<"File not found" <<endl;
        return 0;
    }
  
     while(fin.getline(s,20))
         fout << s << endl;

     fin.close();
     fout.close();
}
