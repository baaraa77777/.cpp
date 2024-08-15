//5) Write a program that defines a function that takes two integers as arguments and returns their sum. then, 
//call that function and output the result.

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of the two numbers is: " << sum(a, b) << endl;
    return 0;
}
