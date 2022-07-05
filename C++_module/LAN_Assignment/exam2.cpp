#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    char name[20];
    float mark;
    public:
    void display_data()
    {
    for(int i=0;i<5;i++)
    cout << roll << " " << name << " " << mark << endl;
    }
};
main()
{
    int ch,c=0;
    student **p;
    void set_data()
    {   
         p=new int*[5];
        cout << "Enter roll name & marks " << endl;
        for(int i=0;i<5;i++)
        cin>>roll>>name>>mark;
    }
    do
    {
     cout << "1)roll 2)name 3)mark 4)Exit" <<endl;
     cin>>ch;

        switch(ch)
        {
            case 1:
                int t;
                c++;
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<5;j++)
                    {
                        if((p[j]->roll) > (p[j+1]->roll))
                        {
                            t=p[j];
                            p[j]=p[j+1];
                            p[j+1]=t;
                        }
                    }
                }
        }

   }while(c!=1);
}
    

        
