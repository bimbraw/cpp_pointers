#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    
    int *p = &a;
    
    cout << a << endl;
    cout << &a << endl;
    cout << *p << endl;
    cout << *&p << endl;
    
    //int *pp = &*p;
    
    //cout << *pp << endl;
    //cout << &*pp << endl;
    
    //cout << &p << endl;
    //cout << pp << endl; 
    //cout << *pp << endl; 

    return 0;
}