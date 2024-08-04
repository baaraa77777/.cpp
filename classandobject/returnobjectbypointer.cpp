//Example of Return Object by Pointer
#include<iostream>
using namespace std;

class height{
    int feet;
    int inches;
    public:
    void getdata(int f, int i){
        feet=f;
        inches=i;

    }
    void display(){
        cout<<"("<<feet<<" , "<<inches<<")"<<endl;
        
    }

    height* addheight(height& d2){
        height *d3= new height();
        d3->feet=feet+d2.feet;
        d3->inches=inches+d2.inches;

        d3->feet+=d3->inches/12;
        d3->inches=d3->inches%12;
        return d3;
    }
};

int main(){
    height d1,d2, *d3;
    d1.getdata(7,9);
    d2.getdata(9,38);
    cout<<"d1=";
    d1.display();
    cout<<"d2=";
    d2.display();
    d3=d1.addheight(d2);
    cout<<"d3=";
    d3->display();
    return 0;
}
