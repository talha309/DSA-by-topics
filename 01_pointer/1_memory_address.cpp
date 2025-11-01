#include <iostream>
using namespace std;

int main()
{
    // main point is '&' called the address of memory. used to find the address of variable in the memory.
    int a = 10;
    cout << "Address of a: " << &a << endl; 
    // The memory address always a hexa decimal number (16)
    cout << "Value of a:" << a <<endl;

    float num = 3.14;
    cout <<"Address of num: "<< &num << endl;
    cout << "Value of num:" << num <<endl;

    double dnum = 9.81;
    cout <<"Address of dnum: "<< &dnum << endl;
    cout << "Value of dnum:" << dnum <<endl;

    char ch = a;
    cout << "Address of ch: " << (void *)&ch << endl; // cast to void*
    cout << "Value of ch:" << ch <<endl;
    return 0;
}
