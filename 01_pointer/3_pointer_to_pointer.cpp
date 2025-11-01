// That store addresses of other pointer.
#include <iostream>
using namespace std;

int main(){
    // define variable
    int a = 2;
    cout << "the value of a:" <<a <<endl;
    // pointer to store the address of variable.
    int* ptr = &a;
    cout <<"the address of a:"<<ptr<<endl;
    // pointer-to-pointer to store address of pointer ptr.
    int** parptr = &ptr;
    cout <<"the address of pointer:"<< parptr<<endl;
    return 0;

}
