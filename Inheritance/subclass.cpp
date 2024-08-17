//Program to make a sub-class
#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"This function is of class A"<<endl;
    }
};

class B:public A{

};

int main(){
    B obj;
    obj.display();
    return 0;
}
