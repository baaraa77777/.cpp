#include <iostream>
using namespace std;
void functio(int a, string b = "Default String")
{
    cout << a << " " << b << endl;
}
int main()
{
    functio(10, "Hello");
    functio(20);

    return 0;
} 