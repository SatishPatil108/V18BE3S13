#include<iostream>
using namespace std;
class student
{
    protected:
        int roll;
        char name[20];
    public:
        student(){}
        void set_data()
        {
            cout<<"Enter roll & name" << endl;
            cin >> roll >> name;
        }
        ~student(){}
};
class exam:public student
{
    protected:
        float marks[6];
    public:
        exam(){}
        void set_marks()
        {
            cout << "Enter Marks" << endl;
            for(int i=0;i<=5;i++)
                cin >> marks[i];
        }
        ~exam(){}
};
class result:public exam
{
    float total;
    public:
    result(){}

    void Display_data()
    {
        for(int j=0;j<=5;j++)
        total=total+marks[j];    
        cout << "Total marks=" << total << endl;
    }
    ~result(){}
};
main()
{
    result r1;
    r1.set_data();
    r1.set_marks();
    r1.Display_data();
}
