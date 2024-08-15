//4) Write a program that uses an array to store 5 integers, and then outputs the sum of those integers.

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of the integers is: " << sum << endl   ;

    return 0;
}
