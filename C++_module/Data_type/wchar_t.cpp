#include<iostream>
using namespace std;
main()
{
  wchar_t ch;
  cout << "Enter char" << endl;
  wcin >> ch;
  cout << ch << endl;
  wcout << ch << endl;
  wcout << sizeof(ch) << endl;

  wchar_t ch1='A';
  cout << ch1 << endl;
  wcout << ch1 << endl;
  wcout << sizeof(ch1) << endl;
}
