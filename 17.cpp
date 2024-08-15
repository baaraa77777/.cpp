//17.Write a class Complex to represent complex numbers with real and
//imaginary parts. Define a member function to add two complex numbers.
//Pass objects of the Complex class to this function and display the result

#include <iostream>
using namespace std;

class Complex{
    int real, img;
    public:
    Complex(int r, int i){
        real=r;
        img=i;
    }
    void addcomplex( Complex c2){
        real= real +c2.real;
        img= img + c2.img;
        cout<<"Complex numbers after addition: "<<endl<<"("<<real<<"+"<<img<<"i)"<<endl;
    } 
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(2,3),c2(4,3);
    cout<<"Complex numbers to added: "<<endl;
    c1.display();
    c2.display();
    c1.addcomplex(c2);
    return 0;
}