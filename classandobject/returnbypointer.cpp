#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    void setdata(int f, int i)
       {
        feet = f;

        inches = i;
    }

    Distance *adddistance(Distance d2)

    {

        Distance *d3 = new Distance();

        d3->feet = feet + d2.feet;

        d3->inches = inches + d2.inches;

        d3->feet = d3->feet + d3->inches / 12;

        d3->inches = d3->inches % 12;

        return d3;
    }

    void display()

    {

        cout << "(" << feet << ", " << inches << ")" << endl;
    }
};
int main()

{

    Distance d1, d2, *d3;

    d1.setdata(5, 11);


    d2.setdata(7, 12);

    std::cout<< "d1 = ";

    d1.display();

    cout << "d2 = ";

    d2.display();

    d3 = d1.adddistance(d2);

    cout << "d3 = ";

    d3->display();

        return 0;
}
