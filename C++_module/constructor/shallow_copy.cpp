#include<iostream>
#include<cstring>
using namespace std;
class shallow
{
    char *str;
    public :
    shallow(){}
    shallow(const char *s)
    {
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }

    void modify()
    {
        str[0]='s';
    }

    void print_data()
    {
        cout << "string-" << str << endl;

    }
};

main()
{
    shallow obj1("Vector"),obj2(obj1);

    obj1.print_data();
    obj2.print_data();

    cout << "*************************************" << endl;

    obj1.modify();

    obj1.print_data();
    obj2.print_data();
}



