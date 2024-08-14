//WAP to overload unary minus (-) operator to invert sign of data members of a 
//distance object.

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;  // Distance in meters

public:
    Distance()  { 
        feet=0;
    }

    // Constructor
    Distance(int f)  { 
        feet=f;
    }

    // Function to display the distance
    void display()  {
        cout << "Distance: " <<feet << " feet" << endl;
    }

    // Overload the unary minus operator
    Distance operator-()  {
        
        return Distance(-feet);
    }
};

int main() {
    Distance d1(10);  // Create a Distance object with 25.5 meters
    Distance d2;
    cout << "Original distance: ";
    d1.display();  // Display original distance

     d2 = -d1;  
    cout << "Inverted distance: ";
    d2.display();  // Display the distance after applying unary minus

    return 0;
}
