
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