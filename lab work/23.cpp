//23. WAP to overload == operator using friend function.

#include<iostream>
using namespace std;

class Distance0{
    int feet;
    int inch;
    public:
    Distance0(int f, int i){
        feet=f;
        inch=i;
    }
    friend int operator==(Distance0, Distance0);
    
};

int operator==(Distance0 D1, Distance0 D2){
    if(D1.feet == D2.feet && D1.inch == D2.inch)
    return 1;
    else
    return 0;
}
int main(){
    Distance0 d1(4,8);
    Distance0 d2(4,8);
    if (d1==d2)
    cout<<"Both distances are of same length."<<endl;
    else
    cout<<"Distance are of different length."<<endl;
    return 0;
}