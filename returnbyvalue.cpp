#include <iostream>

using namespace std;

class Test
{

    int value;

public:
    void getData()
    {

        cout << "Enter the value" << endl;

        cin >> value;
    }

    void putData()
    {

        cout << "The value is " << value << endl;
    }

    Test Today(Test obj)
    {

        obj.value = 10; // Change the value of the passed object

        return obj; // Return the modified object
    }
};

int main()
{

    Test t1, t2;

    cout << "Enter the data for t1" << endl;

    t1.getData();

    t2 = t1.Today(t1); // Call the Today() function with t1 as an argument

    cout << "The data for t1" << endl;

    t1.putData();

    cout << "The data for t2" << endl;

    t2.putData();

    return 0;
}