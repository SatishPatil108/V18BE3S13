#include<iostream>
using namespace std;
class Complex
{
    int real,img;
        public:
            void set_data()
            {
                cout << "Enter real and img" << endl;
                cin >> real >> img;
            }

            void print_data()
            {
                cout << "Complex:" << real << "+" << img << "j" << endl;
            }

            void addition(Complex t1, Complex t2)
            {
                real=t1.real+t2.real;
                img =t1.img + t2.img;
            }
            void subtraction(Complex t3,Complex t4)
            {
                real=t3.real-t4.real;
                img =t3.img-t4.img;
            }
};
main()
{
    Complex c1,c2,c3,c4;
    c1.set_data();
    c2.set_data(); 
    c3.addition(c1,c2);
    c4.subtraction(c1,c2);
    c3.print_data();
    cout<< "*************************" << endl;
    c4.print_data();

}


