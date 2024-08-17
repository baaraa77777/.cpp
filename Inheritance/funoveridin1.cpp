// Example of function overriding

#include<iostream>
using namespace std;

class A {
    public:
    void display(){
        cout<<"function is of class A"<<endl;
    }
};

class B:public A{ //subclass of A
    public:
    void display(){
        cout<<"function is of class B"<<endl;
    }
};

int main(){
    B obj;
    obj.display();       //calling function in derived class or sub-class
    obj.A::display();    //calling  fuction in base class
    return 0;
}
