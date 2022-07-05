#include<iostream>
#include<cstring>
using namespace std;
class Deep
{
    char *str;
    public:
    Deep(){}
    Deep(const char *s)
    {
        str=new char [strlen(s)+1];
        strcpy(str,s);
    }

    Deep(Deep &temp)
    {
        str=new char [strlen(temp.str)+1];
        strcpy(str,temp.str);
    }

    void modify()
    {
        str[0]='S';
    }
    void print_data()
    {
        cout << "string-" << str << endl;
    }
};

main()
{
    Deep obj1("Vector"),obj2(obj1);
    obj1.print_data();
    obj2.print_data();

    cout << "**********************************************" << endl;

    obj1.modify();

    obj1.print_data();
    obj2.print_data();
}

