#include<iostream>
#include<cstdlib>
using namespace std;
class student
{
    int age;
    char name[20];
    public:
    student(){}
    void set_data()
    {
        cout << "Enter name and age" << endl;
        cin >> name >> age;
    }
    void display_student()
    {
        cout << name << " " << age << endl;
    }
    ~student(){}
};
class UG:public student 
{
    protected:
    int m1,m2;
    public:
    UG(){}  
    void set_UG_marks()
    {   
        student::set_data();
        student::display_student();
        cout << "Enter UG Marks" << endl;
        cin >> m1 >> m2;
    }
    ~UG(){}
};
class PG:public student
{
    protected:
        int m3,m4;
    public:
        PG(){}
        void set_PG_marks()
        {
            cout << "Enter PG marks" << endl;
            cin >> m3 >> m4;
        }
      ~PG(){}
};
class result: public UG,public PG
{
    int total;
    public:
    result(){}
    void display_result()
    {
        total=m1+m2+m3+m4;
        cout << "Total marks =" << total << endl;
    }

    ~result(){}
};
main()
{
    int ch,c=0;
    result r1;
    do
    {
        cout << "1)UG Marks  2)PG Marks 3) display 4)Exit" << endl;
        cin>>ch;
        switch(ch)
        {
            case 1:r1.set_UG_marks();
                   c++;
                   break;
            case 2:r1.set_PG_marks();
                   c++;
                   break;
            case 3:r1.display_result();
                   break;
            case 4:exit(0);
            default:
            cout << "You have select rong option please select proper option" << endl;
            break;
        }
    }while(c!=4);
}
