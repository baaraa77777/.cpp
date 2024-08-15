//11) Write a program that defines a function that takes a string as an argument and returns a reference to that string.

#include <iostream>
using namespace std;

string& refReturn(string& str)
{
    return str;
}

int main()
{
    string name = "Radhika";
    string& refStr = refReturn(name);
    cout << "Reference string is " << refStr << endl;

    return 0;
}
