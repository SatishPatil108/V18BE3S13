#include<iostream>
using namespace std;
class wife;//forword declaration
class husband
{   
    char name[10];
    float sal;

    public :
            void set_data()
            {
                cout << "Enter name and salary" <<  endl;
                cin >> name >> sal;
            }

        friend float Income_tax(husband &h,wife &w);
};

class wife
{   
    char name[10];
    float sal;

    public :
            void set_data()
            {
                cout << "Enter name and salary" <<  endl;
                cin >> name >> sal;
            }

        friend float Income_tax(husband &h,wife &w)
       {
            return h.sal + w.sal;
       }
};

main()
{
    husband h;
    wife w;
    h.set_data();
    w.set_data();

    float total;
    total=Income_tax(h,w);
    if(total<300000)
    {
        cout << "Don't pay the tax" << endl;
    }
    else
    {
        cout << "Pay the tax" << endl;
    }
}
