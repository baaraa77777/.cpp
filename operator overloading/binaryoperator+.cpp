//To add the two heights(in feet and inch) using operator overloading as a member function.
#include<iostream>
using namespace std;

class height{
    int feet, inch;
    public:
    void getdata(){
        cout<<"Enter the distance in feet and inch: "<<endl;
        cin>>feet>>inch;
    }
    height operator+(height h2){
        height h3;
        h3.feet=feet+h2.feet;
        h3.inch=inch+h2.inch;

        h3.feet+=h3.inch/12;
        h3.inch=h3.inch%12;
        return h3;
    }
    void display(){
        cout<<"Height:("<<feet<<","<<inch<<") "<<endl;
    } 
};

int main(){
    height h1, h2, h3;
    h1.getdata();
    h2.getdata();
    cout<<"First entered height:"<<endl;
    h1.display();
    cout<<"Second entered height:"<<endl;
    h2.display();
    h3=h1+h2;
    cout<<"Height(after addition):"<<endl;
    h3.display();
    return 0;
}
