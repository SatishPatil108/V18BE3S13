#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream fout("data1");
    fout<<"satish patil" << endl;
    fout <<"Aniket Deshpande" << endl;
    fout <<"kiran karbhari" << endl;
    fout.close();
}
