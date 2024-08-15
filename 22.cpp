//22. WAP to swap private data members of two classes using friend function

#include <iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    A(int p){
        a=p;
    }
    void display(){
        cout<<"Value of class A is "<<a<<endl;
    }
    friend void swap(A&, B&);
};
class B{
    int b;
    public:
    B(int q){
        b=q;
    }
    void display(){
        cout<<"Value of class B is "<<b<<endl;
    }
    friend void swap(A&, B&);
};
void swap(A& obj1, B& obj2){
    int temp;
    temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}
int main(){
    A aa(5);
    B bb(9);
    cout<<"Value before swapping: "<<endl;
    aa.display();
    bb.display();
    swap(aa, bb);
    cout<<"Value after swapping: "<<endl;
    aa.display();
    bb.display();
    return 0;
}