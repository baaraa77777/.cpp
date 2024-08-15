//25.Create a class called Length that has data members meter and centimeter.
//Overload + operator to add two objects of class Length. (For example, L3= L1 + L2)

#include<iostream>
using namespace std;

class Length{
    int meter;
    int centimeter;
    public:
    void getlength(){
        cout<<"Enter the length in meter and in centimeter: "<<endl;
        cin>>meter>>centimeter;
    }
    Length operator+(Length L){
        Length Len;
        Len.meter=meter+L.meter;
        Len.centimeter=centimeter+L.centimeter;
        Len.meter+=Len.centimeter/100;
        Len.centimeter=Len.centimeter%100;
        return Len;
    }
    void display(){
        cout<<"("<<meter<<"m, "<<centimeter<<"cm)"<<endl;
    }
};

int main(){
    Length L1, L2, L3;
    L1.getlength();
    L2.getlength();
    cout<<"Entered Lengths: "<<endl;
    L1.display();
    L2.display();
    L3=L1+L2;
    cout<<"Lengths after addition: "<<endl;
    L3.display();
    return 0; 
}