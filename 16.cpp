//16.Write a program to demonstrate the objects are destroyed in the reverse
//order from their creation in the constructor

#include <iostream>
using namespace std;

class Example {  
    int id;
    public:
    Example(int i){
    id = i;
    cout << "Constructing Example " << id << endl;
    }
    ~Example(){
    cout << "Destructing Example " << id << endl;
}
};

int main(){
    Example obj1(1); // Constructing Example 1
    Example obj2(2); // Constructing Example 2
    return 0; // Program exits, destructors are called in reverse order of creation
}