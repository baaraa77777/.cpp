//10) Write a program that defines a function that takes an integer as an argument and returns a pointer to that integer.

#include <iostream>
using namespace std;
int *returnPointer(int p)
{
    int *ptr = new int;
    *ptr = p;
    return ptr;
}
int main()
{
    int n = 5;

    int *p = returnPointer(n);
    cout << "The value of int is " << *p << endl;

    delete p;
    return 0;
}
