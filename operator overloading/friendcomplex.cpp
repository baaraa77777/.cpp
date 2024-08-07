#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    void getdata(){
        cout<<"Enter the real and imaginary part: ";
        cin>>real>>img;
    }
    friend complex operator+(complex, complex);
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
}; 
complex operator+(complex c1, complex c2){
     complex c3;
     c3.real=c1.real+ c2.real;
     c3.img=c1.img+c2.img;
     return c3;
}

int main(){
    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    cout<<"Entered complex values:"<<endl;
    c1.display();
    c2.display();
    c3=c1+c2;
    cout<<"The complex values after addition:"<<endl;
    c3.display();
    return 0;
}
