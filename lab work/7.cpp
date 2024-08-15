//7) Write a program that demonstrates function overloading by defining twofunctions with the same name but different
//parameter lists. One function should take two integers as arguments and return their sum, and the other function 
//should take three integers as arguments and return their sum. Call both functions in the main () function and print the results.

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of the two numbers is: " << sum(a, b) << endl;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "The sum of the three numbers is: " << sum(a, b, c) << endl;
    return 0;
}
