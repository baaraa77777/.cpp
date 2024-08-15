//18.Create a class Counter with a static data member to count the number of
//objects created. Define a member function to display the count. Create
//multiple objects of this class and display the count after each creation.

#include <iostream>
using namespace std;

class Counter
{
    static int count;
    public:
    Counter(){
        count++;
    }
    void display(){
        cout << "value of count in object " << count << " is " << count << endl;
    }
};

int Counter::count = 0;
int main()
{
    Counter obj1,obj2,obj3;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}