#include<iostream>
#include<clocale>
#define RED "\033[31;44;4m"
#define RESET "\033[0m"
using namespace std;

main()
{
    wchar_t ch[5]={0x0917,0x0941,0x0921};
    setlocale(LC_ALL,"");
    wcout << RED;
    wcout << ch << endl;
    wcout << RESET;
}
