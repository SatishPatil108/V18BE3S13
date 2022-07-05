#include<iostream>
using namespace std;
class Wife;// forword declearation
class Husband
{
    char name[20];
    float sal;

    public :
        void set_data()
        {
            cout << "Enter Name & Sal" << endl;
            cin >> name >> sal;
        }

      friend float Income_tax(Husband &h,Wife &w);
};

class Wife
{
    char name[20];
    float sal;

    public :
        void set_data()
        {
            cout << "Enter Name & Sal" << endl;
            cin >> name >> sal;
        }
friend float Income_tax(Husband &h ,Wife &w);
};

  float Income_tax(Husband &h ,Wife &w)
  {
      return h.sal + w.sal;
  }
        
main()
{
    Husband h1;
    Wife w1;
    h1.set_data();
    w1.set_data();
    

    float amt;
    amt=Income_tax(h1,w1);

    if(amt < 350000)
    {
        cout << "Don't pay the Tax" << endl;
    }
    else
    {
        cout << "Pay the Tax" << endl;
    }
}
