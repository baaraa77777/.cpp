#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    void getdata(){
        cout<<"Enter the real and imaginary part: "<<endl;
        cin>>real>>img;
    }
    complex operator+(complex c2){
        complex c3;
        c3.real= real +c2.real;
        c3.img= img + c2.img;
        return c3;
    } 
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    cout<<"First complex values: ";
    c1.display();
    cout<<"Second complex values: ";
    c2.display();
    c3=c1+c2;
    c3.display();
    return 0;
}
