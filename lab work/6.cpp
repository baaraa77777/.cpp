//6) Write a program that define a function that takes two integers and a characteras arguments and returns the result
//of the operation specified by the character. The possible characters are '+', '-', '*', '/'.

#include <iostream>
using namespace std;
float operation(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return 0;
    }
}
int main()
{
    int a, b;
    char c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter the operation you want to perform: ";
    cin >> c;
    cout << "The result is: " << operation(a, b, c) << endl;

    return 0;
}
