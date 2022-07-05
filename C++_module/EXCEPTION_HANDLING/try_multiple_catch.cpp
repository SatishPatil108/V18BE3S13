#include<iostream>
using namespace std;
main()
{
    try
    {
     //   throw 100;
        throw "satish";
       // throw 23.5;
        throw  'A';
    }
    catch(int a)
    {
        cout << "int type" << endl;
    }
    catch(const char *str)
    {
        cout << "char * type" << endl;
    }
    catch(double f)
    {
        cout << "double type" << endl;
    }
    catch(...)
    {
        cout << "Default" << endl;
    }
}

