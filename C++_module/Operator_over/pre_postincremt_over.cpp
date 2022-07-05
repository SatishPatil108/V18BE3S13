#include<iostream>
using namespace std;
class A
{
    int x,y;
        public:
            A(){
                x=0,y=0;
            }

            A(int a,int b){
                x=a,y=b;
            }

            void print_data()
            {
                cout << "x=" << x << " ";
                cout << "y=" << y << endl;
            }

            A operator ++ ()
            {
                cout << "pre increment" << endl;

                 A temp;
                 x=x+1,y=y+1;

                 temp.x=x;
                 temp.y=y;

                 return temp;
            }

            A operator ++ (int)
            {
                cout << "post increment" << endl;
                A temp;
                temp.x=x;
                temp.y=y;

                x=x+1,y=y+1;

                return temp;
            }
};

main()
{
    A a1(10,20),a2;

 //   a2=++a1;// pre increment
    a2=a1++;//post increment

    a1.print_data();
    cout<<"********************"<< endl;
    a2.print_data();
}
