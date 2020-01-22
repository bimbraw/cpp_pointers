#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    
    int *p = &a;
    
    cout << "Value of a using a: " << a << endl;
    cout << "Address of a using a: " << &a << endl;
    cout << "Value of a using p: " << *p << endl;
    cout << "Address of a using p: " << *&p << endl;
    
    return 0;
}
