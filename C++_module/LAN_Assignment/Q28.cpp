#include<iostream>
using namespace std;
class student
{
    int roll;
    char branch[10];
public:
    student(){}
    void set_data()
    {
        cout << "Enetr roll and Branch Name" <<  endl;
        cin >> roll >> branch;
    }
    void display()
    {
        cout << roll << " " << branch << endl;
    }
    ~student(){}
};
class Internal_Exam: virtual public student
{
    protected:
        float sub1;
        float sub2;
    public:
        Internal_Exam(){}
        void set_data()
        {
            cout << "Enter the Internal Marks" << endl;
            cin >> sub1 >> sub2;
        }
        void display()
        {
            cout << "sub1=" << sub1 << " ";
            cout << "sub2=" << sub2 <<endl;
        }
       ~Internal_Exam(){}
};
class External_Exam:virtual public student
{
    protected :
        float sub3;
        float sub4;
    public:
        External_Exam(){}
        void set_data()
        {
            cout << "Enter the external marks" << endl;
            cin >> sub3 >> sub4;
        }
        void display()
        {
            cout << "sub3=" << sub3 << " ";
            cout << "sub4=" << sub4 << endl;
        }
      ~External_Exam(){}
};
class result:public Internal_Exam,public External_Exam
{
    float total;
    public:
    result(){}
    void set_data()
    {
        student::set_data();
        Internal_Exam::set_data();
        External_Exam::set_data();
    }
    void display()
    {
        student::display();
        Internal_Exam::display();
        External_Exam::display();
        total=sub1+sub2+sub3+sub4;
        cout << "Total marks =" << total << endl;
    }
    ~result(){}
};
main()
{
    result r1;
    r1.set_data();
    r1.display();
}

