#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    // Constructors
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    // Destructor
    ~Rectangle()
    {
        cout << "Rectangle object is destroyed" << endl;
    }

    // Member function to calculate and print area
    void Area()
    {
        double area = length * width;
        cout << "Area of the rectangle: " << area <<endl;
    }

    // Member function to display length and width
    void Display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main()
{
    Rectangle rect2(7.0, 4.0); // Parameterized constructor
    rect2.Display();
    rect2.Area();
    return 0;
}
