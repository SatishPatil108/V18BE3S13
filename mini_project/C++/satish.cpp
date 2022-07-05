#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
class my_string 
{
    char *str;
        public:
    
           /************** Default constructor ***********************/
            my_string(){
                str=0;
            }
          
          /********************* Destructor **************************/   
          ~my_string()
          {  
              if(str!=0)
              delete str;
          }
           /************* Parametrized constructor *******************/  
            my_string(const char *s)
            {
                str=new char[strlen(s)+1];
                strcpy(str,s);
            }
          /************** Copy constructor ***************************/
            my_string(const my_string &temp)
            {
               str=new char[strlen(temp.str)+1];
               strcpy(str,temp.str);
            }
          /************** Assignment operator overloaded**************/   

            my_string operator = (my_string &temp)
             {
                str=new char[strlen(temp.str)+1];
                strcpy(str,temp.str);
                return *this;
            }
          /**************** friend function declaration **************/         
    friend istream& operator >> (istream& in,my_string &);
    friend ostream& operator << (ostream& out,my_string &);
};
/********* friend function defination of extraction operator(>>)*********/
istream& operator >> (istream& in,my_string &temp)
{
    cout << "Enter string" << endl;
    int i=0,j;
    char ch;
    FILE *fp;// Take file pointer
    fp=fopen("data","w+");//open into right mode
     
    ch=getchar();// taking input from the user.
    while(1)
    {
        if(ch!='\n' || ch==' ')
        {
             fputc(ch,fp);
             ch=getchar();
        }
        else
            break;
    }

    fseek(fp,0,SEEK_END);
    i=ftell(fp);// finding the length of the string
    temp.str=new char[i+1];// Allocate the memory
    rewind(fp);
    j=0;
    while((ch=fgetc(fp))!=-1)   
        temp.str[j++]=ch;// taking one array and putting the string char one by one
   
        temp.str[j]='\0';// putting the '\0' at the end
}

/********* friend function defination of insertion operator(<<)*********/
ostream& operator << (ostream& out,my_string &temp)
{ 
    out<< "String=" << temp.str << endl;
}
/*********************** main() function ********************************/
main()
{   
    my_string a1,a2("V18BE3S13"),a3(a2),a4;
    cin >> a1;
    cout << a1;
    a4=a1; 
    cout << a2;
    cout << a3;
    cout << a4;
    
}
