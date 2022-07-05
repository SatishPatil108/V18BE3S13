#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;

      public:
         void set_data()
         {
             cout << "Enter Data" << endl;
             cin >> real >> img;
         }

         void print_data()
         {
             cout << "complex num :";
             cout << real << "+" << img << "j"<< endl;
         }
        
         void addition1(Complex t1,Complex t2)//call by objects
         {
             real =t1.real + t2.real;
              img =t1.img + t2.img;
         }

         void addition2(Complex *t1,Complex *t2)// call by address
         {
             real=t1->real + t2->real;
              img=t1->img + t2->img;
         }

         void addition3(Complex &t1,Complex &t2)// call by reference
       {
             real=t1.real + t2.real;
              img=t1.img + t2.img;
         }
};
main()
{
    Complex c1,c2,c3;
    c1.set_data();
    c2.set_data();
    
    c3.addition1(c1,c2);//call by objects
    c3.print_data();//print c3
    
    c3.addition2(&c1,&c2);//call by address
    c3.print_data();//print c3

    c3.addition3(c1,c2);//call by reference
    c3.print_data();//print c3
    
    /*
    c3=c1+c2; //invalid
    c3.real=c1.real+c2.real;//invalid
    c3.img=c1.img+c2.img;//invalid
    */
}
