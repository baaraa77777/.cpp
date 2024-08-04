#include <iostream>

using namespace std;

class Demo
{

    int a;

public:
    void getdata()
    {

        cout << "Enter a value for A: ";

        cin >> a;
    }

    void sum(Demo *ob1, Demo *ob2)
    {

        ob1->a = 2; //(*ob1).a=2;

        ob2->a = 4; //(*ob2).a=4;

        a = ob1->a + ob2->a; // a=(*ob1).a+(*ob2).a;
    }

    void print()
    {

        cout << "Value of A: " << a << endl;
    }
};

int main()
{

    Demo d1, d2, d3;

    cout << "Enter data for d1:" << endl;

    d1.getdata();

    cout << "Enter data for d2:" << endl;

    d2.getdata();

    cout << "Before passing d1 and d2 as function arguments" << endl;

    d1.print();

    d2.print();

    d3.sum(&d1, &d2);

    cout << "After passing d1 and d2 as function arguments" << endl;

    d1.print();

    d2.print();

    d3.print();

    return 0;
}