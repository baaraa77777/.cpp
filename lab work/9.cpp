#include <iostream>

using namespace std;
int b = 10;        // global variable
static int c = 20; // static variable

int main()
{
    int a = 50; // local variable
    cout << "Local variable a: " << a << endl;
    cout << "Global variable b: " << b << endl;
    cout << "Static variable c: " << c << endl;
    
    return 0;
}