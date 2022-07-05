#include<iostream>
using namespace std;
main()
{
    int *a;
    a=new int[5];//to allocate 20 bytes of memory dynamically.
    cout << "Enter Data" << endl;
    for(int i=0;i<5;i++)
    cin >> a[i];//scanning from the user
    for(int i=0;i<5;i++)
    cout << a[i] << " ";// printing the data
    cout << endl;
    delete []a;//deallocating array
    
}
