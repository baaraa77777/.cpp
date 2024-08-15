//21. WAP to add, private data members of two classes using friend function

#include<iostream>
using namespace std;

class beta;
class alpha{
    int data;
    public:
    void setdata(int d){
        data=d;
    }
    friend int frifunction(alpha,beta);
};
class beta{
    
    int data;
    public:
    void setdata(int d){
        data=d;
    }
    friend int frifunction(alpha,beta);
};
int frifunction(alpha aa, beta bb){
    return aa.data + bb.data ;
}
int main(){                               
    alpha aa;
    beta bb;
    aa.setdata(5);
    bb.setdata(6);
    cout<<frifunction(aa,bb);
    return 0;
}