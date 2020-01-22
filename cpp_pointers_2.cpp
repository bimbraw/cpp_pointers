#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    
    int *p = &a;
    
    int *pp = &*p;
    
    cout << "Value of a using a: " << a << endl;
    cout << "Address of a using a: " << &a << endl << endl;
    
    cout << "Value of a using p: " << *p << endl;
    cout << "Address of a using p: " << *&p << endl << endl;
    
    cout << "Value of a using pp: " << *pp << endl;
    cout << "Address of a using pp: " << &*pp << endl << endl << endl;
    
    cout << "Value of p using p: " << p << endl;
    cout << "Address of p using p: " << &p << endl << endl;
    
    cout << "Value of p using pp: " << *pp << endl;
    cout << "Address of p using pp: There is no way except by variable manipulation statement" << endl;

    return 0;
}