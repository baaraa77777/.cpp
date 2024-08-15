//14.Define a class Room with following specifications:
//a. Data Members
//i. length
//ii. width
//b. Member Functions
//i. getdata() to assign initial values
//ii. display () to display length and width
//iii. area () to find and display the area

#include <iostream>
using namespace std;
class Room{
    int length;
    int width;
    public:
    void getdata(){
        cout<<"Enter length and width: "<<endl;
        cin>>length>>width;
    }
    // Member function to calculate and print area
    void Area()
    {
        double area = length * width;
        cout << "Area of the Room: " << area <<endl;
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
    Room R;
    R.getdata();
    R.Display();
    R.Area();
    return 0;
}