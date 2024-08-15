//12) Write a program that defines an inline function that takes three integers as arguments and returns the maximum of those
//integers. Call this function in the main () function and print the result.

#include <iostream>
using namespace std;

inline int max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    int maxvalue = max(a, b, c);
    cout << "The maximum of all three is " << maxvalue << endl;

    return 0;
}
