//  Special variable that store memory addresses of other varaible.
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int *ptr = &a;
    cout << "The value of variable is:" << a <<endl;
    cout << "the address of variable:"<<ptr << endl;
    return 0;
}
