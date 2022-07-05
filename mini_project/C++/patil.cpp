#include<iostream>
#include<cstdlib>
#define MAX 5
#include<clocale>
#define RED " \033[31m"
#define GREEN " \033[32m"
#define BLUE  " \033[34m"
#define MAGNETA " \033[35m"
#define CYAN    " \033[36m"
#define BROWN   "\033[33m"
#define RESET " \033[0m"
using namespace std;
template<class Type>
class stack
{
    Type t[MAX];
    public:
    void push(int *m);
    void pop(int *n);
    void display(int *p);
};
    template<class T1>
void stack<T1>::push(int *m)
{
    if(*m==MAX)
    {
        wcout << CYAN;
        cout<< "stack is overflow" << endl;
        wcout<< RESET;
        return;
    }
    cin >>t[++*m];
    wcout<<RED;
    cout << t[*m] << " " <<"is insterted into stack successfully" << endl;
    wcout << RESET;
}

    template<class T2> 
void stack<T2>::pop(int *n)
{
    if(*n==0)
    {
        wcout << CYAN;
        cout<< "stack is underflow" << endl;
        wcout << RESET;
        return;
    }
    int x=t[(*n)--];
    wcout << BLUE ;
    cout << x << " " << "is deleted from the stack" << endl;
    wcout << RESET;

}
    template<class T3>
void stack<T3>::display(int *p)
{
    if(*p==0)
    {   
        wcout<< GREEN;
        cout << "stack is empty " << endl;
        wcout << RESET;
        return;
    }

    for(int i=*p;i>=1;i--)
    {
        wcout << MAGNETA;
        cout  << t[i] << endl;
        wcout << RESET;
    }


}    
/*****************************MAIN()***********************************/
int main()
{
    stack<int>obj1;
    stack<char>obj2;
    stack<float>obj3;
    stack<double>obj4;
    int ch,top=0,a=0,b=0,c=0,d=0,e=0;
    do
    {
        cout << "Please  Enter the  choice"  << endl;
        cout << "-------------------------"<< endl;
        cout << " NO        NAME          " << endl;
        cout << "-------------------------" << endl;
        cout << " 1)        int           " << endl;
        cout << " 2)        char          " << endl;
        cout << " 3)        float         " << endl;
        cout << " 4)        Double        " << endl;
        cout << " 5)        Exit          " << endl;

        cin  >> ch; 
        switch(ch)
        {
            case 1:
                int i;
                a=0;
                wcout<<CYAN;
                cout << "integer stack application is Ready to use" << endl;
                wcout<<RESET;
                do
                {
                    cout << "Enter the valid option" << endl;
                    cout << "----------------------" << endl;
                    cout << " NO      NAME         " << endl;
                    cout << "----------------------" << endl;
                    cout << " 1)      PUSH         " << endl;
                    cout << " 2)      POP          " << endl;
                    cout << " 3)      DISPLAY      " << endl;
                    cout << " 4)      EXIT         " << endl;
                    cin >> i;
                    switch(i)
                    {
                        case 1:obj1.push(&top);
                               break;
                        case 2:obj1.pop(&top);
                               break;
                        case 3:obj1.display(&top);
                               break;
                        case 4:break;       
                        default:
                               cout<<"You have Enter wrong choice Please Enter valid choice"<<endl;
                               cout << "Please Enter the correct choice You have only 3 choice" << ++b << endl;
                    }
                }while(i!=4 && b!=3);
                break;
            case 2:
                int j;
                a=0;
                wcout<<CYAN;
                cout << "charactor stack application is Ready to use" << endl;
                wcout<<RESET;
                do
                {
                    cout << "Enter the valid option" << endl;
                    cout << "----------------------" << endl;
                    cout << " NO      NAME         " << endl;
                    cout << "----------------------" << endl;
                    cout << " 1)      PUSH         " << endl;
                    cout << " 2)      POP          " << endl;
                    cout << " 3)      DISPLAY      " << endl;
                    cout << " 4)      EXIT         " << endl;
                    cin >> j;
                    switch(j)
                    {
                        case 1:obj2.push(&top);
                               break;
                        case 2:obj2.pop(&top);
                               break;
                        case 3:obj2.display(&top);
                               break;
                        case 4:break;       
                        default:
                               cout<<"You have Enter wrong choice Please Enter valid choice"<<endl;
                               cout << "Please Enter the correct choice You have only 3 choice" << ++c << endl;
                    }
                }while(j!=4 && c!=3);

                break;
            case 3:
                int k;
                a=0;
                wcout<<CYAN;
                cout << " float stack application is Ready to use" << endl;
                wcout<<RESET;
                do
                {
                    cout << "Enter the valid option" << endl;
                    cout << "----------------------" << endl;
                    cout << " NO      NAME         " << endl;
                    cout << "----------------------" << endl;
                    cout << " 1)      PUSH         " << endl;
                    cout << " 2)      POP          " << endl;
                    cout << " 3)      DISPLAY      " << endl;
                    cout << " 4)      EXIT      " << endl;
                    cin >> k;
                    switch(k)
                    {
                        case 1:obj3.push(&top);
                               break;
                        case 2:obj3.pop(&top);
                               break;
                        case 3:obj3.display(&top);
                               break;
                        case 4:break;
                        default:
                               cout<<"You have Enter wrong choice please enter correct choice "<<  endl;
                               cout << "Please enter the correct choice You have only 3 choice" << ++d << endl;
                    }
                }while(k!=4 && d!=3);

                break;
            case 4:
                int l;
                a=0;
                wcout<<CYAN;
                cout << "double stack application is Ready to use" << endl;
                wcout << RESET;
                do
                {
                    cout << "Enter the valid option" << endl;
                    cout << "----------------------" << endl;
                    cout << " NO      NAME         " << endl;
                    cout << "----------------------" << endl;
                    cout << " 1)      PUSH         " << endl;
                    cout << " 2)      POP          " << endl;
                    cout << " 3)      DISPLAY      " << endl;
                    cout << " 4)      EXIT         " << endl;
                    cin >> l;
                    switch(l)
                    {
                        case 1:obj4.push(&top);
                               break;
                        case 2:obj4.pop(&top);
                               break;
                        case 3:obj4.display(&top);
                               break;
                        case 4:break;
                        default:
                               cout<<"You have Enter wrong choice Please Enter valid choice"<<endl;
                               cout << "Please Enter the correct choice" << ++e << endl;
                    }
                }while(l!=4 && e!=3);
                break;
            case 5:
            wcout << GREEN;    
            cout << "Thanks For Using This Application " << endl;
            wcout << RESET;       
                   exit(0);
        }
    }while(ch!=5);

}
