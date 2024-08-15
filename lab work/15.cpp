//15.Create a class called Distance with two data members inch and feet.
//Provide Constructor and different member function with the following operations.
//▪ To input data for Distance objects.
//▪ To show the data of Distance objects.
//▪ Member function to add two Distance objects passed as object as function arguments and then display the result

#include<iostream>
using namespace std;

class height{
    int feet;
    int inch;
    public:
    height(){
        feet=0;
        inch=0;
    }
    height (int f, int i){ //paramaterized constructor
        feet=f;
        inch=i;
    }
    void display(){
        cout<<"Distance is ("<<feet<<","<<inch<<")"<<endl;
    }
    height sum(height h1, height h2){
        height h3;
        h3.feet= h1.feet+h2.feet;
        h3.inch=h1.inch+h2.inch;
        h3.feet= h3.feet+h3.inch/12;
        h3.inch=h3.inch%12;
        return h3;
    }
};
int main(){
    height h1(3,4), h2(8,9);
    height h3;
    cout<<"Distances entered: "<<endl;
    h1.display();
    h2.display();
    h3= h3.sum(h1, h2);
    cout<<"Total distance after addition: "<<endl;
    h3.display();
    return 0;
}