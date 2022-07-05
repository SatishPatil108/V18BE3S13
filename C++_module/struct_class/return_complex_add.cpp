#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;

    public :
    void set_data()
    {
        cout << "Enter Data" << endl;
        cin >> real >> img;
    }

    void print_data()
    {
        cout << "complex number :";
        cout << real << "+" << img << "j" << endl;
    }

   /* Complex addition(Complex t2)// return type of function is object
    {  
        Complex ret;
        ret.real=real + t2.real;
        ret.img =img + t2.img;
        return ret;
    }


    Complex& addition(Complex t2)//return type is reference
    {
        static Complex ret;
        ret.real = real + t2.real;
        ret.img =img + t2.img;
        return ret;
    }
  */  
    Complex *addition(Complex t2)// return type is address
    {
        static Complex ret;
        ret.real=real + t2.real;
        ret.img =img  + t2.img;
        return &ret;
    }
};

main()
{
    Complex c1,c2,c3,*c4;
    c1.set_data();
    c2.set_data();

    c3=c1.addition(c2);//when return type is object & reference
    c3.print_data();// return type is reference seperatye memory will not be created
    
    //c4=c1.addition(c2);//when return type is address
    //c4->print_data();
}
